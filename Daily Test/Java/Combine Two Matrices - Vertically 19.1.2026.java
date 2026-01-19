import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();

        int[][] A = new int[r][c];
        int[][] B = new int[r][c];

        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                A[i][j]=sc.nextInt();

        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                B[i][j]=sc.nextInt();

        int match=-1, kfirst=0;

        for(int k=0;k<c;k++){
            boolean ok=true;
            for(int i=0;i<r;i++) if(A[i][k]!=B[i][0]) ok=false;
            if(ok){ match=k; kfirst=0; break; }
        }

        for(int k=0;k<c;k++){
            boolean ok=true;
            for(int i=0;i<r;i++) if(A[i][k]!=B[i][c-1]) ok=false;
            if(ok){ match=k; kfirst=c-1; break; }
        }

        int s = (kfirst==0)?match:match-(c-1);
        int mn = Math.min(0,s), mx = Math.max(c-1,s+c-1);
        int w = mx-mn+1;

        int[][] res = new int[r][w];

        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++){
                res[i][-mn+j]+=A[i][j];
                res[i][s-mn+j]+=B[i][j];
            }

        for(int i=0;i<r;i++){
            for(int j=0;j<w;j++)
                System.out.print(res[i][j]+" ");
            System.out.println();
        }
    }
}