import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] res = new int[N / 2];
        int idx = 0;

        for (int i = 0; i < N; i += 2) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            int ah = a / 100, at = (a / 10) % 10, ao = a % 10;
            int bh = b / 100, bt = (b / 10) % 10, bo = b % 10;

            String merged =
                    Math.max(ah, bh) + "" + Math.min(ah, bh) +
                    Math.max(at, bt) + "" + Math.min(at, bt) +
                    Math.max(ao, bo) + "" + Math.min(ao, bo);

            res[idx++] = Integer.parseInt(merged);
        }

        Arrays.sort(res);

        for (int x : res)
            System.out.print(x + " ");
    }
}