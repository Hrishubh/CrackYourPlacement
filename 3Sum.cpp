class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//         We first sort the whole array and then fix the smallest element in the triplet. This way, we can use two pointers to find the other two numbers and can also easily skip over triplets which have duplicate values using second++ and third-- commands. 
//         Demonstrated Below:
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            int target=-nums[i];
            int start=i+1,end=nums.size()-1;
            while(start<end){
                int sum=nums[start]+nums[end];
                if(sum<target)
                    start++;
                else if(sum>target)
                    end--;
                else{
                    // vector<int> t={nums[i],nums[start],nums[end]};
                    v.push_back({nums[i],nums[start],nums[end]});
                    end--;start++;
                    while(start<end && nums[start]==nums[start-1])
                        start++;
                    while(start<end && nums[end]==nums[end+1])
                        end--;
                }
            }
            // IMPORTANT
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
                i++;
        }
        return v;
    }
};
