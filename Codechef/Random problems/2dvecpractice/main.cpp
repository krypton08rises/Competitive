#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> res;
    vector<vector<int>> intervals{ { 1, 3 }, { 2, 6 }, { 8,10},{15,18} };
        for(int i=0,j=0;i<intervals.size();i++){
                res.push_back(std::vector<int>());
                if(intervals[i][1]>=intervals[i+1][0]){
                    res[j].push_back(intervals[i][0]);
                    res[j].push_back(intervals[i+1][1]);
                    i++;
                }
                      else{
                            res[j].push_back(intervals[i][0]);
                            res[j].push_back(intervals[i][1]);
                        }
                    j++;
            }
            cout<<res[1][1];
    }
