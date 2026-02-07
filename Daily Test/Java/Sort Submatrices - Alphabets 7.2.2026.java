import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r = sc.nextInt();
        int c = sc.nextInt();

        String[][] mat = new String[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                mat[i][j] = sc.next();

        int k = sc.nextInt();

        for (int i = 0; i < r; i += k) {
            for (int j = 0; j < c; j += k) {
                ArrayList<String> res = new ArrayList<>();

                for (int x = i; x < i + k; x++)
                    for (int y = j; y < j + k; y++)
                        res.add(mat[x][y]);

                Collections.sort(res);

                int idx = 0;
                for (int x = i; x < i + k; x++)
                    for (int y = j; y < j + k; y++)
                        mat[x][y] = res.get(idx++);
            }
        }

        for (String[] row : mat) {
            for (String s : row)
                System.out.print(s + " ");
            System.out.println();
        }
    }
}