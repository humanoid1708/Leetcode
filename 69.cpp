//https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int h = x;
        int mid;
        while(l <= h) {
            long long mid = l+(h-l)/2;
            if(mid*mid > x) {
                h = mid-1;
            }
            else if (mid*mid < x ) {
                l = mid+1;
            }
            else {
                return mid;
            }
        }
        return h;
    }
};