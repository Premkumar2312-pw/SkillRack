import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int size = N * 2;
        char[][] hyp = new char[size][size];

        for (int i = 0; i < size; i++)
            Arrays.fill(hyp[i], '-');

        for (int i = 0; i < size; i += N) {
            for (int j = 0; j < size; j += N) {
                int row = i + N - 1, col = j, cnt = 0;
                while (cnt < N) {
                    hyp[row][col] = '*';
                    row--;
                    col++;
                    cnt++;
                }
            }
        }

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++)
                System.out.print(hyp[i][j]);
            System.out.println();
        }
    }
}