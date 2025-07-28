// https://leetcode.com/problems/intersection-of-two-arrays-ii/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//BRUTE FORCE approach
// vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//     unordered_map<int, int> num1;
//     unordered_map<int, int> num2;
//     for(auto i : nums1)num1[i]++;
//     for(auto i : nums2)num2[i]++;
//     vector<int> result;

//     for(auto i : num1) {
//         for(auto j : num2) {
//             if(i.first == j.first) {
//                 int flag = 0;
//                 if(i.second >= j.second) flag = i.second;
//                 else flag = j.second;
//                 for(int k = 1; k <= flag; k++) result.push_back(i.first);
//             }
//         }
//     }
//     return result;
// }

//optimised:-

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int>  result;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int len1 = nums1.size();
    int len2 = nums2.size();
    int i = 0, j =0;
    while(i < len1 && j < len2) {
        if(nums1[i] < nums2[j]) i++;
        else if (nums1[i] > nums2[j]) j++;
        else {
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return result;
}