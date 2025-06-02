// Problem: https://leetcode.com/problems/two-sum/

#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

// Approach-1: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// bool twoSum(vector<int>& arr, int target){
//     for(int i = 0; i<arr.size(); i++){
//         for(int j = i+1; j<arr.size(); j++){
//             if(arr[i] + arr[j] == target)
//                 return true;
//         }
//     }
//     return false;
// }
// Approach-2: HashMap  
// Time Complexity: O(n)
// Space Complexity: O(n)
vector<int> twoSum(vector<int>& nums, int target){
    map<int, int> myMap;
        vector<int> res;
        for(int i = 0 ; i < nums.size(); ++i){
            if(myMap.count(target - nums[i]) > 0){
                // return [i, myMap[target-nums[i]]];
                res.push_back(i);
                res.push_back(myMap[target-nums[i]]);
            }
            else{
                myMap[nums[i]] = i;
            }
        }
        return res; 
}

int main(){
    //code

    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(arr, target);
    cout << "Indices: ";
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}