class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        if(size(needle)==0)
            return 0;
        while(i<size(haystack)){
            if(haystack[i]!=needle[j]){
                if(j>0){
                    i=i-j;
                }
                i++;
                j=0;
                continue;
            }
            else {
                i++;
                if(j==size(needle)-1)
                    return i-size(needle);
                j++;
            }
        }
        return -1;
    }
};
