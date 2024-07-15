class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        for(i=0;j<n;i++)
        {
            nums[i]=nums[j];
            while(j<n&&nums[j]==nums[i])
            {
                j++;
            }
        }
        for(int j=i;j<n;j++)
        {
            nums[j]=95;
        }
        return i;
    }
};