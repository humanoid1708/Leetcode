//https://leetcode.com/problems/intersection-of-two-arrays

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> myset(nums1.begin(), nums1.end());
    unordered_set<int> result; //maintains the uniqueness

    for(int num : nums2) {
        if(myset.find(num) != myset.end()) {
            result.insert(num);
        } 
    }
    return vector<int>(result.begin(), result.end());
}