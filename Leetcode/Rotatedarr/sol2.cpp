class Solution {
public:
    int search(vector<int>& nums, int target) {
       int i=0,j=nums.size()-1;
        if(nums.size()==0)
            return -1;
        else if(nums.size()==1){
                return nums[0]==target?0:-1;
        }
        int index;
        if(nums[i]>target && nums[j]<target && nums[i]>nums[j])
            return -1;
        if(nums[i]<nums[j])
            index = 1;
        else {
            while(1){
                    if(nums[i]>nums[i+1]){
                        index = i+1;
                            break;
                    }
                    else if(nums[j]<nums[j-1]){
                        index = j;
                            break;
                    }
                    if(nums[i]>(nums[(i+j)/2]))
                        j = (i+j)/2;
                    else if(nums[j]<(nums[(i+j)/2]))
                        i = (i+j)/2;
                }
        }
            if(nums[index]==target)
                return index;
            i=0;
            j=nums.size()-1;
            if(nums[i]>target)
                    j = i+index;
            else if(nums[i]<target)
                    i = i+index-1;
            if(nums[i]==target)
                return i;
            if(nums[j]==target)
                return j;
            if(nums.size()==2)
                return -1;

            while(i!=j){
                if((i+j)/2==i)
                    i++;
                if(nums[(i+j)/2]>target)
                    j = (i+j)/2;
                else if(nums[(i+j)/2]/2<target)
                    i = (i+j)/2;
                else if(nums[(i+j)/2]/2==target)
                    return ((i+j)/2);
            }
        return -1;
        }
};
