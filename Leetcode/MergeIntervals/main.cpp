class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int j=0;
        for(int i=0;i<intervals.size();i++){
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
        return res;
        }
    };
