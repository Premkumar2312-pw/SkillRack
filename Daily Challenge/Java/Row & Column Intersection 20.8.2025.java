import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int[][] mat = new int[r][r];
        for(int i=0;i<r;i++)
            for(int j=0;j<r;j++)
                mat[i][j] = sc.nextInt();

        for(int i=0;i<r;i++) {
            boolean row = true, col = true;
            for(int k=0;k<r;k++) {
                if(k!=i && mat[i][k]!=0) row=false;
                if(k!=i && mat[k][i]!=1) col=false;
            }
            if(row && col) {
                System.out.println(i+1);
                return;
            }
        }
        System.out.println(-1);
    }
}