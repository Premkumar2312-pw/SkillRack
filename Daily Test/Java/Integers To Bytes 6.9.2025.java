import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] mat = new int[N];
        for (int i = 0; i < N; i++) mat[i] = sc.nextInt();

        StringBuilder s = new StringBuilder();
        for (int x : mat) {
            s.append(Integer.toBinaryString(x));
        }

        s.reverse();
        ArrayList<Integer> e = new ArrayList<>();

        for (int i = 0; i < s.length(); i += 8) {
            String q = s.substring(i, Math.min(i + 8, s.length()));
            q = new StringBuilder(q).reverse().toString();
            e.add(Integer.parseInt(q, 2));
        }

        Collections.reverse(e);
        for (int x : e) System.out.print(x + " ");
    }
}