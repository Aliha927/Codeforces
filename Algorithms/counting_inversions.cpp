#include<bits/stdc++.h>
using namespace std;

unsigned int merge(int arr[], int temp[], int l, int m, int r){
    unsigned int inversions = 0;
    int i = l;
    int j = m;
    int k = l;
    while (i < m && j <= r){
        if (arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
            inversions += m - i;
        }
        k++;
    }

    while (i < m){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= r){
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int i = l; i <= r; i++){
        arr[i] = temp[i];
    }
    return inversions;
}

unsigned int count(int arr[], int temp[], int l, int r){
    unsigned int inversions = 0;
    if (r > l){
        int m = (r + l)/ 2;
        inversions = count(arr, temp, l, m);
        inversions+= count(arr, temp, m + 1, r);
        inversions += merge(arr, temp, l, m+1, r);
    }
    return inversions;

}

int main(){
    const int arr_size = 100000;
    int arr[arr_size];
    ifstream file("IntegerArray.txt");
    string str;
    int i = 0;
    while (getline(file, str))
    {
        arr[i] = stoi(str);
        i++;
    }
    int temp [arr_size];
    cout<<count(arr, temp, 0, arr_size-1);
}