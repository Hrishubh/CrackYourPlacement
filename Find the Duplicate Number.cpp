class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        int n=nums.size();
        for(int i=0;i<=n;i++){
            if(s.count(nums[i]))
                return nums[i];
            s.insert(nums[i]);
        }
        return 0;
    }
};
