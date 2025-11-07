import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        String[][] mat = new String[r][c];
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                mat[i][j] = sc.next();
        int k = sc.nextInt();

        if(k > 0) {
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++)
                    for(int t = 0; t < k; t++)
                        System.out.print(mat[i][j] + " ");
                System.out.println();
            }
        } else {
            int reps = Integer.parseInt(Integer.toString(k).substring(1));
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < reps; j++) {
                    for(int q = 0; q < c; q++)
                        System.out.print(mat[i][q] + (q == c - 1 ? "
" : " "));
                }
            }
        }
    }
}