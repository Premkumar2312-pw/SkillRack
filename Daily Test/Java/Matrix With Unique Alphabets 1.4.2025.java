import java.util.Scanner;

public class MatrixTransform {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char ch1 = sc.next().charAt(0);
        char ch2 = sc.next().charAt(0);
        sc.close();

        char[][] m = new char[5][5];
        int index = 0;

        for (char c = 'a'; c <= 'z'; c++) {
            if (c == ch1) continue;
            m[index / 5][index % 5] = c;
            index++;
        }

        int[] dx = {-1, 1, 0, 0, -1, -1, 1, 1};
        int[] dy = {0, 0, -1, 1, -1, 1, -1, 1};

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (m[i][j] == ch2) {
                    for (int d = 0; d < 8; d++) {
                        int ni = i + dx[d], nj = j + dy[d];
                        if (ni >= 0 && ni < 5 && nj >= 0 && nj < 5) {
                            m[ni][nj] = Character.toUpperCase(m[ni][nj]);
                        }
                    }
                    break;
                }
            }
        }

        for (char[] row : m) {
            for (char c : row) {
                System.out.print(c + " ");
            }
            System.out.println();
        }
    }
}