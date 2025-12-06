import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextLine()) return;
        String s = sc.nextLine().trim();

        List<Integer> res = new ArrayList<>();
        String[] parts = s.split("#");

        for (String t : parts) {
            int n = t.length();
            for (int i = 0; i < n; i++) {
                if (t.charAt(i) == 'L') {
                    int best = -1;
                    for (int j = 0; j < n; j++) {
                        if (t.charAt(j) == '*') {
                            int d = Math.abs(i - j);
                            if (best == -1 || d < best) best = d;
                        }
                    }
                    res.add(best);
                }
            }
        }

        for (int i = 0; i < res.size(); i++) {
            if (i > 0) System.out.print(" ");
            System.out.print(res.get(i));
        }
    }
}