class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(mp.find(target - nums[i]) != mp.end()){
                if(nums[i] < target - nums[i]) ans = {i, mp[target - nums[i]]};
                else return {mp[target - nums[i]], i};
            }else{
                mp[nums[i]] = i;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
