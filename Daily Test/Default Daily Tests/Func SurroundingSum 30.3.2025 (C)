int findSurroundingSum(int R, int C, int matrix[R][C], int xRow, int xCol)
{
    xRow--;
    xCol--;
int directions[8][2] = {
    {-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}
};
int surrounding_sum =0;
for(int i=0;i<8;i++){
    int newRow = xRow + directions[i][0];
    int newCol = xCol + directions[i][1];
    if(newRow >= 0 && newRow < R && newCol >= 0 && newCol < C){
        surrounding_sum += matrix[newRow][newCol];
    }
}
return surrounding_sum;
}
