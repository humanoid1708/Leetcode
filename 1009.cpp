//https://leetcode.com/problems/complement-of-base-10-integer

class Solution {
public:
    int bitwiseComplement(int n) {
        int ans, flag = 0, mask = 0;
        int num = n;
        if(n == 0) return 1;
        while(num != 0) {
            num = num >> 1;
            flag ++;
        }
        for(int i = 0; i < flag; i++) {
            mask= mask << 1;
            mask = mask | 1;
        }
        ans = ~(n) & mask;
        return ans;
    }
};