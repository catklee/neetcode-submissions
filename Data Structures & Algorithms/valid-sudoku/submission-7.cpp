class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> v(9);
        vector<unordered_set<int>> q(9);
        for (int i = 0; i < 9; i++){
            unordered_set<int> h;
            for (int j = 0; j < 9; j++){
                if (board[i][j] != '.'){
                    if(!v[j].insert(board[i][j]).second){
                        return false;
                    };
                    if (!h.insert(board[i][j]).second){
                        return false;
                    };
                    if (i < 3){
                        if (j < 3){if(!q[0].insert(board[i][j]).second){return false;}}
                        else if (j < 6){
                            if(!q[1].insert(board[i][j]).second){return false;}}
                        else if (j < 9){
                            if(!q[2].insert(board[i][j]).second){return false;}}
                    }
                    else if (i < 6){
                        if (j < 3){
                            if(!q[3].insert(board[i][j]).second){return false;}}
                        else if (j < 6){
                            if(!q[4].insert(board[i][j]).second){return false;}}
                        else if (j < 9){
                            if(!q[5].insert(board[i][j]).second){return false;}}
                    }

                    else if (i < 9){
                        if (j < 3){
                            if(!q[6].insert(board[i][j]).second){return false;}}
                        else if (j < 6){
                            if(!q[7].insert(board[i][j]).second){return false;}}
                        else if (j < 9){
                            if(!q[8].insert(board[i][j]).second){return false;}}
                    }
                }
            }
        }
        return true;
    }

};
