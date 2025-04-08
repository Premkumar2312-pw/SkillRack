import java.util.*;

public class BorderRotation {
    static int r, c;

    static List<Integer> getBorder(int[][] mat) {
        List<Integer> b = new ArrayList<>();
        for (int j = 0; j < c; j++) b.add(mat[0][j]);
        for (int i = 1; i < r - 1; i++) b.add(mat[i][c - 1]);
        for (int j = c - 1; j >= 0; j--) b.add(mat[r - 1][j]);
        for (int i = r - 2; i > 0; i--) b.add(mat[i][0]);
        return b;
    }

    static boolean isRotation(List<Integer> a, List<Integer> b) {
        int n = a.size();
        for (int shift = 0; shift < n; shift++) {
            boolean match = true;
            for (int i = 0; i < n; i++) {
                if (!a.get((i + shift) % n).equals(b.get(i))) {
                    match = false;
                    break;
                }
            }
            if (match) return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        r = sc.nextInt();
        c = sc.nextInt();
        int[][] m1 = new int[r][c];
        int[][] m2 = new int[r][c];

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m1[i][j] = sc.nextInt();

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m2[i][j] = sc.nextInt();

        List<Integer> b1 = getBorder(m1);
        List<Integer> b2 = getBorder(m2);

        System.out.println(isRotation(b1, b2) ? "YES" : "NO");
    }
}