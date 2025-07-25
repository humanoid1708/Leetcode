//https://leetcode.com/problems/unique-number-of-occurrences/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> hashmap;
    for( auto i : arr) hashmap[i]++;
    set<int> v;
    for( auto i : hashmap) {
        if(v.count(i.second)) return false;
        else v.insert(i.second);
    }
    return true;
    }
};