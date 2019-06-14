class Solution {
public:

    bool isValidSudoku(vector<vector<char>>& board)
    {
        std::array<short,9> cols = {0},
            sections = {0};

        for (int i = 0; i < 9; i++) // rows
        {
            short row = 0;
            for (int j = 0; j < 9; j++) // cols
            {
                if (board[i][j]=='.') continue;

                auto section = i/3*3 + j/3;

                int idx = 1 << (board[i][j]-'0');

                if (row & idx || cols[j] & idx || sections[section] & idx)
                    return false;

                row |= idx;
                cols[j] |= idx;
                sections[section] |= idx;
            }
        }

        return true;
    }

};
