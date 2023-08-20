#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[5][5];


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    int one_row, one_col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                one_row = i;
                one_col = j;
                break;
            }
        }
    }


    int moves = abs(one_row - 2) + abs(one_col - 2);

    printf("%d\n", moves);

    return 0;
}
