import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] m = new int[r][c], u = new int[r][c], d = new int[r][c], l = new int[r][c], ri = new int[r][c];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                m[i][j] = sc.nextInt();
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(m[i][j]==1){
                    u[i][j] = 1 + (i>0 ? u[i-1][j] : 0);
                    l[i][j] = 1 + (j>0 ? l[i][j-1] : 0);
                }
        for(int i=r-1;i>=0;i--)
            for(int j=c-1;j>=0;j--)
                if(m[i][j]==1){
                    d[i][j] = 1 + (i<r-1 ? d[i+1][j] : 0);
                    ri[i][j] = 1 + (j<c-1 ? ri[i][j+1] : 0);
                }
        int a = 0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(m[i][j]==1){
                    int x = Math.min(Math.min(u[i][j], d[i][j]), Math.min(l[i][j], ri[i][j]));
                    a = Math.max(a, x);
                }
        System.out.println(a>=2 ? a : -1);
    }
}