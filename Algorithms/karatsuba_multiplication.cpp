#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;

cpp_int pow10_int(int n) {
    cpp_int p = 1;
    while (n-- > 0)
        p *= 10;
    return p;
}

cpp_int karatsuba(cpp_int x, cpp_int y) {
    // base case
    if (x < 10 || y < 10) {
        return x * y;
    }

    // recursive case
    long long n = max(x.str().length(), y.str().length());
    long long half_n = n / 2;

    cpp_int pow = pow10_int(half_n);
    cpp_int a = x / pow;
    cpp_int b = x % pow;
    cpp_int c = y / pow;
    cpp_int d = y % pow;

    cpp_int ac = karatsuba(a, c);
    cpp_int bd = karatsuba(b, d);
    cpp_int abcd = karatsuba(a + b, c + d);

    return ac * pow10_int(2 * half_n) + (abcd - ac - bd) * pow10_int(half_n) + bd;
}

int main() {
    string as, bs;
    cin >> as >> bs;

    cpp_int a(as); // string -> cpp_int, handles arbitrary length
    cpp_int b(bs);

    cout << karatsuba(a, b) << endl;
}