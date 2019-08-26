#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int main()
{


    /*class Solution {
            public:
            int maxProfit(vector<int> &prices) {
                        int maxPro = 0;
                        int minPrice = INT_MAX;

                            for(int i = 0; i < prices.size(); i++){
                                        minPrice = min(minPrice, prices[i]);
                                        maxPro = max(maxPro, prices[i] - minPrice);
                                    }

                        return maxPro;
}
};
    */
                vector<int> prices = {3,3,5,0,0,3,1,4};
                if(prices.size()==1 || prices.size()==0)
                        return 0;
                int min=INT_MAX,max,i,j,maxdiff=INT_MIN;
                for(i=0;i<prices.size();i++){
                                if(prices[i]<min){
                                            max=INT_MIN;
                                            min = prices[i];
                                            j=i+1;
                                            cout<<min<<" ";
                                    }
                        for(;j<prices.size();j++){
                                    if(prices[j]>=max && prices[j]>prices[i]){
                                                max = prices[j];
                                                cout<<max<<"\t";
                                                if(max-min>maxdiff && max-min>0)
                                                        maxdiff = max-min;
                                        }
                            }
                    }
                if(maxdiff==INT_MIN)
                        maxdiff = 0;
                    cout<<"\n"<<maxdiff;
}
