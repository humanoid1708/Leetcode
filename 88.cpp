//https://leetcode.com/problems/merge-sorted-array

#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int count = m+n-1;

        while(i >= 0 && j >= 0) {
            if(nums1[i] > nums2[j]) {
                nums1[count] = nums1[i];
                count--;
                i--;
            }
            else{
                nums1[count] = nums2[j];
                count--;
                j--;
            }
        }
        while(j >= 0) {
            nums1[count] = nums2[j];
            count--;
            j--;
        }
    }
};