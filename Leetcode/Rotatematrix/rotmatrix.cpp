class Solution {
public:
    void rotate(vector<vector<int>>& matrix){
            int size = matrix.size();
            for(int i = 0; i<size;i++){
                vector<int> a;
                for(int j =size-1; j>=0; j--){
                    a.push_back(matrix[j][i]);
                    }
                matrix.push_back(a);
                }
            for(int i =0; i<size;i++){
                matrix.erase(matrix.begin());
                }
        }
};
