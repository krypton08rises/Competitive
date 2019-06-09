class Solution {
public:
    string convert(string s, int numRows) {
        int i,j=0;
        string str;
        for(int k=0;j!=s.size();++k){
            if(k%2!=0){
            for( i=k;i<s.size();i+=4,j++){
                str[j] = s[i];
                }
            }
            else{
                for(i=k;i<s.size();++j,i+=2){
                    str[j] = s[i] ;
                }
            }
        }
        return str;
    }
};
