import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] mat = new int[r][c];
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++) mat[i][j] = sc.nextInt();
        
        while(r % 2 == 0) {
            int[][] newMat = new int[r/2][c];
            for(int i = 0; i < r/2; i++)
                for(int j = 0; j < c; j++)
                    newMat[i][j] = mat[i][j] + mat[r-1-i][j];
            mat = newMat; r /= 2;
            for(int i = r-1; i >= 0; i--) {
                for(int j = 0; j < c; j++) System.out.print(mat[i][j] + " ");
                System.out.println();
            }
        }
        sc.close();
    }
}