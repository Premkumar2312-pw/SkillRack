import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        System.out.println("#");

        int tri = 1;
        for (int j = 2; j < N - 1; j++) tri += 2;

        int start = 1, copy = tri, b = 1, end = N, st = start;
        ArrayList<StringBuilder> a = new ArrayList<>();

        while (start < end - 1) {
            for (int i = st; i < N - 1; i++) {
                String s;
                if (start % 2 == 1) {
                    if (start == 1) {
                        s = "*".repeat(b) + "#" + "*".repeat(tri) + "#";
                        a.add(new StringBuilder(s));
                        tri -= 2; b++;
                    } else {
                        s = "*".repeat(tri) + "#";
                        a.get(i - 1).append(s);
                        tri -= 2;
                    }
                } else {
                    s = "*".repeat(tri) + "#";
                    a.get(i - 1).append(s);
                    tri += 2;
                }
            }
            if (start % 2 == 1) { tri = 1; st++; }
            else { tri = copy - 2; N--; }
            start++; copy -= 2;
        }

        for (StringBuilder row : a) System.out.println(row);
        System.out.println("*".repeat(b) + "#");
    }
}