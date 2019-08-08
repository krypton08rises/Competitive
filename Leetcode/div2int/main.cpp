class Solution {
public:
    int divide(int dividend, int divisor) {
        int q=1;
        if(dividend==INT_MAX)
            dividend--;
        if(divisor==1)
            return dividend;
        if(divisor<0)
            divisor*=-1;
        if(divisor>dividend)
            return 0;
        while(divisor<dividend){
            if(divisor==dividend)
                break;
            divisor+=divisor;
            q++;

        }
        return q;
    }
};
