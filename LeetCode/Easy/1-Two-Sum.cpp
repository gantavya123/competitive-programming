// Leetcode Question
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum2;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    sum2.push_back(i);
                    sum2.push_back(j);
                }
            }
        }
        return sum2;
    }
};
