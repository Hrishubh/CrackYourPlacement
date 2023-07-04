class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        m[0]++;
        int sum=0,ans=0,i=0;
        while(i<nums.size()){
            sum+=nums[i++];
            int rem=(sum%k+k)%k;
            if(m.count(rem))
                ans+=m[rem];
            m[rem]++;
        }
        return ans;
    }
};
