class Solution {
public:
    string nearestPalindromic(string n) {
        int i,j,res,len = n.size();
        string res1,res2;
        std::string::size_type sz;
        int num = stoi(n,&sz);
        res=num;
        for(i=len-1,j=0;i>len/2;i--,j++){
            res1[j] = res/pow(10,i);
            res=res%pow(10,i);
        }
        if(len%2==1)
            res1[j] = num/10;
        for(i=len/2;i>0;i--,j++){
            res1[j] = res1[i];
        }
        return res1;
    }
};
