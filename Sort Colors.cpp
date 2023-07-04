class Solution {
public:
    void sortColors(vector<int>& nums) {
        int k=0,j=nums.size()-1,i=0;
        while(i<=j){
            // Here we are doing i-- because we also have to check the number we are swapping in.
            if(nums[i]==2){
                swap(nums[i--],nums[j--]);
            }
            // Here we don't do i-- is because we know that either the number is 1 or else 
            // we are swapping the number with itself.
            else if(nums[i]==0){
                swap(nums[i],nums[k++]);
            }
            i++;
        }
    }
};
