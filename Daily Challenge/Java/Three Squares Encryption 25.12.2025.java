import java.util.*;

public class Main {
    static void ab(char a, char[][] b, int c) {
        for (int i = 0; i < b.length; i++) {
            for (int j = 0; j < b[0].length; j++) {
                if (a == b[i][j]) {
                    System.out.print("" + c + (i + 1) + (j + 1));
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s1 = sc.next().trim();
        String s2 = sc.next().trim();

        char[][] m1 = new char[3][3];
        char[][] m2 = new char[3][3];
        char[][] m3 = new char[3][3];

        int k = 0;

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                m1[i][j] = s2.charAt(k++);

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                m2[i][j] = s2.charAt(k++);

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                m3[i][j] = s2.charAt(k++);

        for (int idx = 0; idx < s1.length(); idx++) {
            char ch = s1.charAt(idx);
            ab(ch, m1, 1);
            ab(ch, m2, 2);
            ab(ch, m3, 3);
        }

        sc.close();
    }
}