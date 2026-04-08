import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[][] mat = new int[n][n];

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mat[i][j]=s.nextInt();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i%2==0)
                    System.out.print(mat[i][n-1-j]+" ");
                else
                    System.out.print(mat[i][j]+" ");
            }
            System.out.println();
        }
    }
}