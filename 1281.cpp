//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0, count = n;
        int i = 10 ;
        while(count > 0) {
            product *= count%10;
            sum += count%10;
            count = count/10;
            i *= 10;
        }
        return product - sum;
    }
};