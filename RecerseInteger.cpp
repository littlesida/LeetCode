/** LeetCode NO.7
 ** Reverse digits of an integer.
 ** Example1: x = 123, return 321
 ** Example2: x = -123, return -321
 ** click to show spoilers.
 ** Note:
 ** The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.
 **/

class Solution {
public:
    int reverse(int x) {
        int answer = 0;
        int quotient = 0;
        while (x) {
            quotient = x%10;
            answer = answer * 10 + quotient;
            // To judge whether it has overflow
            if (answer%10 != quotient) return 0; // 用于判断是否溢出
            x /= 10;
        }
        return answer;
    }
};