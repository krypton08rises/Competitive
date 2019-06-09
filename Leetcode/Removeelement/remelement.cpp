class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,count=0,j=0,chk=0;
        while(i<nums.size()){
            if(nums[i]==val && chk==0){
                j=i;
                i++;
                chk++;
                continue;
            }
            else if(nums[i]==val){
                i++;
                continue;
            }
            nums[j] = nums[i];
            count++;
            i++;
            ++j;
        }
                return count;
    }
};
