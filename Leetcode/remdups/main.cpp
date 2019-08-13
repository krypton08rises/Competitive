class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int temp = nums[0],i;
        for(i=1;i<nums.size();i++){
            if(nums[i]==temp){
                    nums.erase(nums.begin()+i);
                    i--;
                    continue;
                }
            temp = nums[i];
            }
        return nums.size();
    }
};
