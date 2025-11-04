import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[][] board = new String[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                board[i][j] = sc.next();

        int res = 0;
        // main diagonal
        for (int i = 0; i < n; i++)
            if (board[i][i].equals(board[0][0]))
                res++;
        // anti diagonal
        for (int i = 0; i < n; i++)
            if (board[i][n - 1 - i].equals(board[0][n - 1]))
                res++;

        System.out.println(res);
        sc.close();
    }
}