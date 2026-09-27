class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        int i;
       sort(nums.begin(), nums.end());
        int sum;
        
        for(i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i - 1])
    continue;
            int left =i+1;
            int right=nums.size()-1;
            while (left < right){
            sum=nums[i]+nums[right]+nums[left];
            if(sum==0){
              ans.push_back({nums[i], nums[left], nums[right]});
               left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1])
    left++;
     while (left < right &&
                           nums[right] == nums[right + 1]) {
                        right--;
                    }
            }else if(sum<0){
                left++;
            }else{
                right--;
            }
            }
        }        
        return ans;
    }
};
