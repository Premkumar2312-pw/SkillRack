import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt(), C = sc.nextInt();
        int[][] a = new int[R][C];
        char[][] res = new char[R][C];
        int[][] dir = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

        for(int i=0;i<R;i++)
            for(int j=0;j<C;j++) {
                a[i][j] = sc.nextInt();
                res[i][j] = '0';
            }

        for(int i=0;i<R;i++) {
            for(int j=0;j<C;j++) {
                if(a[i][j] == 1) {
                    res[i][j] = 'C';
                    for(int[] d : dir) {
                        int x = i + d[0], y = j + d[1];
                        if(x >= 0 && x < R && y >= 0 && y < C)
                            res[x][y] = 'C';
                    }
                }
            }
        }

        for(int i=0;i<R;i++) {
            for(int j=0;j<C;j++)
                System.out.print(res[i][j] + " ");
            System.out.println();
        }
    }
}