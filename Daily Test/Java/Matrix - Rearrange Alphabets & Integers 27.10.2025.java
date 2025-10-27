import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt(), k = sc.nextInt();
        String[][] l = new String[r][c];
        ArrayList<String> a = new ArrayList<>(), n = new ArrayList<>();
        int f = 0, g = 0;

        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j) {
                l[i][j] = sc.next();
                boolean allAlpha = true;
                for (char ch : l[i][j].toCharArray())
                    if (!Character.isLetter(ch)) allAlpha = false;
                if (allAlpha) a.add(l[i][j]);
                else n.add(l[i][j]);
            }

        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (i >= r - k) {
                    if (j >= c - k)
                        System.out.print(a.get(f++) + " ");
                    else
                        System.out.print(n.get(g++) + " ");
                } else {
                    System.out.print(n.get(g++) + " ");
                }
            }
            System.out.println();
        }
    }
}