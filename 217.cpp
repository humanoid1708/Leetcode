//https://leetcode.com/problems/contains-duplicate/

#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for(int num : nums) {
            if(hash.count(num) == 1) {
                return true;
            }
            hash.insert(num);
        }
        return false;
    }
};
