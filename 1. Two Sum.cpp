#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;

        unordered_map<int,int> mp;

        for(int i=0; i<nums.size(); i++){

            int currentNumber = nums[i];
            int t = target-currentNumber;

            if(mp.find(t) != mp.end()){ //if the t exists in the unordered_map then we have found our solution

                result.push_back(mp[t]);
                result.push_back(i);

            }

            //if the t is not found then add the current number to the map
            mp[currentNumber] = i;

        }

        return result;

    }
};

int main(){

    Solution s;

    vector<int> nums = {3,2,4};
    int target = 6;

    vector<int> result = s.twoSum(nums, target);

    for(auto i : result){

        cout << i << " ";
    }

}