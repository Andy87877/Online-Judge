// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/
class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        while (num != 0){
            if (num%2 == 0){
                num/=2;
            } else {
                num -= 1;
            }
            ans++;
        }
        return ans;
    }
};