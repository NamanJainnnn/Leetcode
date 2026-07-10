class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows, cols, boxes;

        for(int row = 0; row < 9; row++){
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.') continue;

                char num = board[row][col];

                if(rows[row].count(num)) return false;
                rows[row].insert(num);
                if(cols[col].count(num)) return false;
                cols[col].insert(num);
                if(boxes[(row/3)*3 + (col/3)].count(num)) return false;
                boxes[(row/3)*3 + (col/3)].insert(num);

            }
        }
     return true;
    }
};