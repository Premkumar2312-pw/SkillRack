import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        int[][] mat = new int[n][n];

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mat[i][j] = s.nextInt();

        int mid = n/2;

        if(n%2==1){
            System.out.print(mat[mid][mid]);
        } else {
            for(int i=mid-1;i<mid+1;i++){
                for(int j=mid-1;j<mid+1;j++){
                    System.out.print(mat[i][j] + " ");
                }
                System.out.println();
            }
        }
    }
}