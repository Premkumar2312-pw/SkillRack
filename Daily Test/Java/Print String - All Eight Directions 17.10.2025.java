import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next().trim();
        int n = s.length();
        int size = 2 * n - 1;
        char[][] m = new char[size][size];
        int mid = n - 1;

        // Initialize matrix with '*'
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                m[i][j] = '*';

        for (int i = 0; i < n; i++) {
            m[mid - i][mid - i] = s.charAt(i);
            m[mid - i][mid] = s.charAt(i);
            m[mid - i][mid + i] = s.charAt(i);
            m[mid][mid - i] = s.charAt(i);
            m[mid][mid + i] = s.charAt(i);
            m[mid + i][mid - i] = s.charAt(i);
            m[mid + i][mid] = s.charAt(i);
            m[mid + i][mid + i] = s.charAt(i);
        }

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print(m[i][j]);
                if (j < size - 1) System.out.print(" ");
            }
            System.out.println();
        }
    }
}