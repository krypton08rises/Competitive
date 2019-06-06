class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int count = 0;
        int repeat;
        int complement;
        std::map <int,int> temp;
        std::map <int,int> mp;
        for(int i=0;i<nums.size();++i){
            complement = target - nums[i];
            if(nums[i]!=complement)
            temp[complement] = i;
            else {
                if(!repeat){
                    temp[complement] = i;
                }
                count ++;
            }
            mp[nums[i]] = complement;
            if(mp[complement]==nums[i]){
                count++;
                if(count==0){
                a.push_back(temp[nums[i]]);
                a.push_back(i);
                }
                else{
                    a.clear();
                    a.push_back(temp[nums[i]]);
                    a.push_back(i);
                }
            }
        }
            return a;
    }
 };
