#include<iostream>
#include<set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {

        set<int> numsSet(nums.begin(), nums.end());

        if(numsSet.size() == nums.size())
            return false;
        return true;


        // Method 2
        // map<int, int> numsMap;
        
        // for(int i = 0; i<nums.size(); i++){
        //     numsMap[nums[i]]++;
        // }

        // for(int i = 0; i<nums.size(); i++){
        //     if(numsMap[nums[i]] > 1){
        //         return true;
        //     }
        // }
        // return false;

        // Method 1
        // for(int i = 0; i<nums.size(); i++){
        //     int targetElement = nums[i];
        //     for(int j = i+1; j<nums.size(); j++){
        //         if(targetElement == nums[j]){
        //             return true;
        //         }
        //     }
        // }

        // return false;
        
    }

int main(){
    //code

    vector<int> arr = {1, 2,2,3,3, 3,1,2 ,4, 5};
    const bool ans = containsDuplicate(arr);
    cout << (bool)ans << endl;

    return 0;
}