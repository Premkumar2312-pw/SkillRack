import java.util.*;

public class Main {
    public static char[][] stringToMatrix(int N, String str1, String str2) {
        char[][] mat = new char[N][N];
        int idx1 = 0, idx2 = 0, flag = 1;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (flag == 1) {
                    if (idx1 < str1.length())
                        mat[i][j] = str1.charAt(idx1++);
                    else
                        mat[i][j] = str2.charAt(idx2++);
                } else {
                    if (idx2 < str2.length())
                        mat[i][j] = str2.charAt(idx2++);
                    else
                        mat[i][j] = str1.charAt(idx1++);
                }
                flag = 1 - flag;
            }
        }
        return mat;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String str1 = sc.next();
        String str2 = sc.next();

        char[][] matrix = stringToMatrix(N, str1, str2);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                System.out.print(matrix[i][j] + " ");
            System.out.println();
        }
    }
}