class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>::iterator it1 = nums.begin();
        vector<int>::iterator it2 = nums.end();
        int index;
        if(*it1<*it2)
            index = 0;
        else {
            while(1){
                    if(*it1>*(it1+1)){
                        index = it1-nums.begin();
                            break;
                    }
                    else if(*it2>*(it2-1)){
                        index = it2-nums.begin();
                            break;
                    }
                    if(*it1>*(it1+it2)/2)
                        it2 = (it1+it2)/2;
                    else if(*it2<*(it1+it2)/2)
                        it1 = (it1+it2)/2;
                }
        }
            it1 = nums.begin();
            if(*it1>target)
                    it2 = it1+index;
            else if(*it1<target)
                    it1 = it1+index;
            if(*it1==target)
                return it1-nums.begin();
            if(*it2==target)
                return it2-nums.begin();

            while(it1!=it2){
                if(*(it1+it2)/2>target)
                    it2 = (it1+it2)/2;
                else if*((it1+it2)/2<target)
                    it1 = (it1+it2)/2;
                else if((*it1+it2)/2==target)
                    return ((it1+it2)/2-nums.begin());
            }
        return -1;
        }
};
