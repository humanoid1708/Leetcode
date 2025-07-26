//https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//Brute Froce approach
// vector<int> findDuplicates(vector<int>& nums) {
//         unordered_map<int, int> hashmap;
//         vector<int> ans;
//         for(auto i : nums) hashmap[i]++;
//         for(auto i : hashmap) {
//             if(i.second == 2) {
//                 ans.push_back(i.first);
//             }
//         }
//         return ans;
//     }

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;
        int num = nums[index];

        if(num < 0) ans.push_back(index+1);
        else nums[index] = -1 * nums[index];
        return ans;
    }
}
