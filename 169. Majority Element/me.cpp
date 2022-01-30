class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
unordered_map<int, int>mp;
        int n=nums.size();
int ans;
    int appear=n/2;
    sort(nums.begin(),nums.end());
    for(int i=0; i<n;i++){           //(c1)*n
        mp[nums[i]]++;
    }
    cout<<appear;
    for(auto x: mp){     //(c2)*n
        if(x.second>appear){
            ans=x.first;
        }
    }
    return ans;
    }
};