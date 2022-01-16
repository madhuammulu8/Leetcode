class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int s =0;
        for(int i=0;i<n;i++)
        {
            if(nums[s]!=nums[i]){
                swap(nums[s+1],nums[i]);
            s++;
                } 
        }
         if(nums.size()==0)
                return s;
        else
            return s+1;
        
    }
};