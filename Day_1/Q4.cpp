class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0,j=1;j<n;i++,j++)
        {
           if(nums[i]==0)
           {
             while(j<n&&nums[j]==0)
             {
                j++;
             }
             if(j<n)
             swap(nums[i],nums[j]);
           }
        }
    }
};