#include <stdbool.h>

bool isValidSudoku(char** board, int boardSize, int* boardColSize) {


    for (int i = 0; i < boardSize; i++) {

        int seen[10] = {0};

        for (int j = 0; j < boardSize; j++) {

            if (board[i][j] != '.') {

                int num = board[i][j] - '0';

                if (seen[num]) {

                    return false;

                }

                seen[num] = 1;

            }

        }

    }

    for (int j = 0; j < boardSize; j++) {

        int seen[10] = {0};

        for (int i = 0; i < boardSize; i++) {

            if (board[i][j] != '.') {

                int num = board[i][j] - '0';

                if (seen[num]) {

                    return false;

                }

                seen[num] = 1;

            }

        }

    }



    // Check 3x3 subgrids

    for (int k = 0; k < boardSize; k += 3) {

        for (int l = 0; l < boardSize; l += 3) {

            int seen[10] = {0};

            for (int i = k; i < k + 3; i++) {

                for (int j = l; j < l + 3; j++) {

                    if (board[i][j] != '.') {

                        int num = board[i][j] - '0';

                        if (seen[num]) {

                            return false;

                        }

                        seen[num] = 1;

                    }

                }

            }

        }

    }

    return true;

}


