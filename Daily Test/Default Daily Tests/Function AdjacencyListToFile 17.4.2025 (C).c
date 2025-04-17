void writeAdjacencyListToFile(int N, int adjacencyMatrix[N][N]) {

    FILE *fp = fopen("adjacencylist.txt", "w");

    for (int i = 0; i < N; i++) {
        fprintf(fp, "[%d] -> ", i + 1);
        for (int j = 0; j < N; j++) {
            if (adjacencyMatrix[i][j] == 1) {
                fprintf(fp, "%d -> ", j + 1);
            }
        }
        fprintf(fp, "NULL\n");
    }

    fclose(fp);
}

