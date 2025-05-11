import java.util.*;

public class ZigZagMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] m = new int[r][c];
        ArrayList<Integer> z = new ArrayList<>();

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.nextInt();

        int x = sc.nextInt(), y = sc.nextInt();
        
        for (int j = 0; j < c; j++) {
            if (j % 2 == 0)
                for (int i = 0; i < r; i++) z.add(m[i][j]);
            else
                for (int i = r - 1; i >= 0; i--) z.add(m[i][j]);
        }

        int pos = (y - 1) * r + ((y % 2 == 1) ? (x - 1) : (r - x));
        z.remove(pos);
        z.add(-1);

        int idx = 0;
        for (int j = 0; j < c; j++) {
            if (j % 2 == 0)
                for (int i = 0; i < r; i++) m[i][j] = z.get(idx++);
            else
                for (int i = r - 1; i >= 0; i--) m[i][j] = z.get(idx++);
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                System.out.print(m[i][j] + " ");
            System.out.println();
        }

        sc.close();
    }
}