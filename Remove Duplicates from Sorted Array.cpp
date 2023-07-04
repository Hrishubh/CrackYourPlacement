class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1,value=nums[0],n=nums.size();
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[j-1]){
                nums[i]=nums[j];
                value=nums[j];
                i++;
            }
        }
        return i;
    }
}
