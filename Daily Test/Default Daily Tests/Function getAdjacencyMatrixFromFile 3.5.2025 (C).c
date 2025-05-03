void writeAdjacencyMatrixToFile(int N, int E, int edges[E][2])
{
    int matrix[N][N];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            matrix[i][j] = 0;
        }
    }
    for(int i = 0; i < E; i++)
    {
        int from = edges[i][0] - 1;
        int to = edges[i][1] - 1;
        matrix[from][to] = 1;
    }
    FILE *fp = fopen("adjacencymatrix.txt", "w");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            fprintf(fp, "%d", matrix[i][j]);
            if(j != N - 1)
                fprintf(fp, " ");
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}