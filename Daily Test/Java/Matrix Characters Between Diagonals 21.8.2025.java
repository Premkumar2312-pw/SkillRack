import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();
        char[][] mat = new char[r][c];
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                mat[i][j] = sc.next().charAt(0);
            }
        }
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (r == c) {
                    if (i == j) System.out.print(mat[i][j] + " ");
                    else System.out.print("* ");
                } else if (r > c) {
                    if (i - j >= 0 && i - j <= r - c)
                        System.out.print(mat[i][j] + " ");
                    else System.out.print("* ");
                } else {
                    if (j - i >= 0 && j - i <= c - r)
                        System.out.print(mat[i][j] + " ");
                    else System.out.print("* ");
                }
            }
            System.out.println();
        }
    }
}