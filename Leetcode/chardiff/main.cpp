class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,count=0,index;
        array<int,26> arr{0},temp{0};
        while(i<s.size()){
            index = s[i]-'a';
            if(temp[index]>1){
                    copy(arr.begin(), arr.begin()+26, temp.begin());
                    j++;
                    i=j;
                    continue;
            }
                if(j-i>count)
                        count = j-i;
                temp[index]++;
                i++;
        }
        return count;
    }
};
