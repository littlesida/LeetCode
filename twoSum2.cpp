/** LeetCode NO.167
 ** Given an array of integers that is already sorted in ascending order, 
 ** find two numbers such that they add up to a specific target number.
 **
 ** The function twoSum should return indices of the two numbers such that they add up to the target, 
 ** where index1 must be less than index2. 
 **
 ** Please note that your returned answers (both index1 and index2) are not zero-based.
 ** You may assume that each input would have exactly one solution and you may not use the same element twice.
 ** 
 ** Input: numbers={2, 7, 11, 15}, target=9
 ** Output: index1=1, index2=2
 **/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        map<int, int> hash;
        int remain;
        for (int i = 0; i < nums.size(); i++) {
            remain = target - nums[i];
            if (hash.find(remain) != hash.end()) {
            	// +1 because both index1 and index2 are not zero-based.
                answer.push_back(hash[remain]+1);
                answer.push_back(i+1);
                return answer;
            } else {
                hash.insert(make_pair(nums[i], i));
            }
        }
        return answer;
    }
};