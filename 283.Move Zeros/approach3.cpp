public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        int temp =0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[temp++],nums[i]);
            }
        }
    }
};