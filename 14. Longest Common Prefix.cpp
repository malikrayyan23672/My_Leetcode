#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string result = "";

        int index=0; //index of the string

        while(true){

            // size of string should be greater then the index variable.
            if(strs[0].size() <= index){

                return result;

            }

            char a = strs[0][index]; //character at index of first string in the vector

            for(int i=1; i<strs.size(); i++){

                if(strs[i][index] != a){

                    return result;

                }


            }

            result += a;

            index++;
        }

        return result;
        
    }
};

int main(){

    Solution s;

    vector<string> strs = {"flower","flow","flight"};

    string result = s.longestCommonPrefix(strs);

    cout << "Result = " << result << endl;

}