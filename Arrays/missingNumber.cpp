// Problem: https://leetcode.com/problems/missing-number/
// Approach-1: Sort the array and check for the missing number
// Approach-2: Use XOR to find the missing number
// Approach-3: Use the formula n*(n+1)/2 to find the missing number
#include <iostream>
using namespace std;

int missingNumber(vector<int> &nums)
{
    // Approach-1:
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; ++i)
    {
        if (i != nums[i])
            return i;

        if (nums[i] == n - 1)
            return (nums[i] + 1);
    }
    return -1;
    // Approach-2:
    // int n = nums.size();
    // int xor1 = 0;
    // for (int i = 0; i < n; ++i)
    // {
    //     xor1 ^= nums[i];
    // }
    // for (int i = 0; i <= n; ++i)
    // {
    //     xor1 ^= i;
    // }
    // return xor1;

    // Approach-3:
    // int n = nums.size();
    // int sum = (n * (n + 1)) / 2;
    // int sum1 = 0;
    // for (int i = 0; i < n; ++i)
    // {
    //     sum1 += nums[i];
    // }
    // return sum - sum1;

}

int main()
{
    // code
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    const int ans = missingNumber(arr);
    cout << ans << endl;

    return 0;
}