int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    if (r * c != matSize * matColSize[0]) {
        *returnSize = matSize;
        *returnColumnSizes = matColSize;
        return mat;
    }

    int **result = (int **)malloc(r * sizeof(int *));
        for (int i = 0; i < r; i++) {
            result[i] = (int *)malloc(c * sizeof(int));
    }
    *returnSize = r;
    *returnColumnSizes = (int *)malloc(r * sizeof(int));

    for (int i = 0; i < r; i++) {
        (*returnColumnSizes)[i] = c;
    }
    int row = 0;
    int col = 0;
    for (int j = 0; j < matSize; j++) {
        for (int k = 0; k < matColSize[0]; k++) {
            result[row][col] = mat[j][k];
                col++;
            if (col == c) {
                col = 0;
                row++;
            }
        }
    }
    return result;
}
