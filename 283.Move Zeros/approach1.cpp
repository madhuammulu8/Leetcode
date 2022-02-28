class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        int temp =0;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                temp++;
            }
        }
          for(int i=0;i<n;i++)
        {
              if(nums[i]!=0)
              {
                a.push_back(nums[i]);  
              }
          }
        while(temp--)
        {
            a.push_back(0);
        }
        for(int i=0;i<n;i++)
        {
            nums[i] = a[i];
        }
    }
};