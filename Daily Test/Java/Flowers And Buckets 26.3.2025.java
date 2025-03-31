import java.util.Scanner;

public class Main {
    static boolean isSea(char[][] arr, int r, int c) {
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                if (arr[i][j] == '#')
                    return false;
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        char[][] arr = new char[r][c];

        for (int i = 0; i < r; i++)
            arr[i] = sc.next().toCharArray();

        int count = 1;

        while (!isSea(arr, r, c)) {
            if (count % 2 != 0) {
                for (int i = 0; i < r; i++) {
                    for (int j = c - 1; j >= 0; j--) {
                        if (arr[i][j] == '#') {
                            if ((i - 1 >= 0 && arr[i - 1][j] == '#') || (i + 1 < r && arr[i + 1][j] == '#'))
                                break;
                            arr[i][j] = '*';
                            if (j - 1 >= 0 && arr[i][j - 1] == '#')
                                arr[i][j - 1] = '*';
                            break;
                        }
                    }
                }
            } else {
                for (int j = 0; j < c; j++) {
                    for (int i = r - 1; i >= 0; i--) {
                        if (arr[i][j] == '#') {
                            if ((j - 1 >= 0 && arr[i][j - 1] == '#') || (j + 1 < c && arr[i][j + 1] == '#'))
                                break;
                            arr[i][j] = '*';
                            if (i - 1 >= 0 && arr[i - 1][j] == '#')
                                arr[i - 1][j] = '*';
                            break;
                        }
                    }
                }
            }
            count++;
        }

        System.out.println(count - 1);
        sc.close();
    }
}
