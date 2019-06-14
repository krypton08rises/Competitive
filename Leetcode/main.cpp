class Solution {
    int ishorlinevalid(vector<vector<char>>& brd,int i, int j){
        int k=0;
        while(k<9){
            if(k==j){
                continue;
                k++;
            }
            if(brd[i][j]==brd[i][k])
                return 0;
            k++;
        }
        return 1;
    }

    int isverlinevalid(vector<vector<char>>& brd,int i, int j){
        int k=0;
        while(k<9){
            if(k==i){
                continue;
               k++;
            }
            if(brd[i][j]==brd[k][j])
                return 0;
            k++;
        }
        return 1;
    }

    int isblockvalid(vector<vector<char>>& brd,int i, int j){
       int lim1,lim2,k1,k2;
        k1=i/3;
        lim1=k1+3;
        lim2=j/3+3;
        while(k1<lim1){
            k2=j/3;
            while(k2<lim2){
            if(k2==j && k1==i){
                continue;
                k2++;
            }
            if(brd[i][j]==brd[i][j])
                return 0;
            k2++;
            }
            k1++;
        }
        return 1;
    }

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i=0;
        while(i<9){
            int j=0;
            while(j<9){
            //if(board[i][j]>9 || board[i][j]<1) return false;
            if(int(board[i][j])==46){
                continue;
                ++j;
            }
            if(ishorlinevalid(board,i,j)==0)
                return false;
            if(isverlinevalid(board,i,j)==0)
                return false;
            if(isblockvalid(board,i,j)==0)
                return false;
                j++;
            }
            i++;
        }
        return true;
    }
};
