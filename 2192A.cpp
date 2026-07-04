#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int length_of_string = 0;
        cin>>length_of_string;
        string string_to_be_rotated = "";
        cin>>string_to_be_rotated;
        int rotation_count = 0;
        int maximum_group_of_different_characters = 0;
        while (rotation_count < length_of_string){
            int diff_num_of_char = 0;
            //finding same order of characters
            for (int i = 0; i < length_of_string; i++){
                if (string_to_be_rotated[i] != string_to_be_rotated[i+1]){
                    diff_num_of_char++;
                }

            }
            if (maximum_group_of_different_characters < diff_num_of_char){
                maximum_group_of_different_characters = diff_num_of_char;
            }
            string new_string = "";
            new_string = string_to_be_rotated[length_of_string-1] + string_to_be_rotated.substr(0, length_of_string-1);
            string_to_be_rotated = new_string;
            rotation_count++;
        }
        cout << maximum_group_of_different_characters << endl;
        test_cases--;
    }
}