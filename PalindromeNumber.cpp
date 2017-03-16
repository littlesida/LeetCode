/** LeetCode NO.9
 ** Determine whether an integer is a palindrome. Do this without extra space.
 **/

// 简单的翻转
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int reverse = 0;
        int temp = x;
        while (temp) {
            reverse = reverse * 10 + temp%10;
            temp /= 10;
        }
        if (reverse == x) return true;
        else return false;
    }
};

// 在别人的答案里看到的，值翻转一半即可

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0|| (x!=0 &&x%10==0)) return false;
        int sum=0;
        while(x>sum)  // just reversing till half
        {
            sum = sum*10+x%10;
            x = x/10;
        }
        return (x==sum)||(x==sum/10);
    }
};