#include <stdio.h>

void traverseMatrixSpiral(
        int matrix_size,
        int Matrix[matrix_size][matrix_size],
        int startX, int startY);

int main() {
    int N;

    scanf("%d", &N);

    int border = N - 1;
    int matrix_size = N + border * 2;
    int matrix[matrix_size][matrix_size];

    // Preenche a matriz com 0
    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            matrix[i][j] = 0;
        }
    }

    // Define os elementos dentro da borda como count
    int count = 1;
    for (int i = border; i < matrix_size - border; i++) {
        for (int j = border; j < matrix_size - border; j++) {
            matrix[i][j] = count;
            count++;
        }
    }

    int startX, startY;
    scanf("%d %d", &startX, &startY);

    startX = startX + border;
    startY = startY + border;

    traverseMatrixSpiral(matrix_size, matrix, startX, startY);


    return 0;
}

void traverseMatrixSpiral(
        int matrix_size,
        int Matrix[matrix_size][matrix_size],
        int startX, int startY) {
    int x = startX;
    int y = startY;

    int count = 0; // Counter to track how many elements have been traversed
    int direction = 0; // 0: right, 1: down, 2: left, 3: up

    int steps = 1; // Number of steps to take in each direction
    int stepCount = 0; // Counter to track how many steps have been taken in a direction

    int readCounter = 0;

    int totalNonZero = 0;
    int nonZeroCount = 0;

    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            if (Matrix[i][j] != 0) {
                totalNonZero++;
            }
        }
    }

    while (nonZeroCount < totalNonZero) {
        readCounter += 1;
        if (Matrix[x][y] != 0) {
            printf("%d", Matrix[x][y]);
            nonZeroCount++;
            if (nonZeroCount < totalNonZero) {
                printf(" ");
            }
        }

        count++;
        // Update the position based on the current direction
        switch (direction) {
            case 0: // right
                y++;
                break;
            case 1: // down
                x++;
                break;
            case 2: // left
                y--;
                break;
            case 3: // up
                x--;
                break;
        }
        stepCount++;

        // Check if reached the end of steps for the current direction
        if (stepCount == steps) {
            stepCount = 0;
            direction = (direction + 1) % 4; // Update the direction for the next stage
            // Check if the direction changed to right or left
            if (direction == 0 || direction == 2) {
                steps++; // Increment the number of steps for the next stage
            }
        }
    }
    printf("\n%d\n", readCounter);
}