import java.util.Scanner;

public class MatrixFill {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        int N = sc.nextInt();
        int start = 1, copy = 1;
        int size = M * N;
        int[][] mat = new int[size][size];

        for (int i = 0; i < size; i += M) {
            for (int j = 0; j < size; j += M) {
                for (int k = i; k < i + M; k++) {
                    for (int l = j; l < j + M; l++) {
                        mat[k][l] = start++;
                    }
                }
                start = copy + 1;
                copy++;
            }
        }

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}