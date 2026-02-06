import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int X = sc.nextInt();
        int N = sc.nextInt();

        char[] S = new char[X];
        Arrays.fill(S, '-');

        for (int k = 0; k < N; k++) {
            String str = sc.next();
            int P = sc.nextInt() - 1;

            int L = str.length();
            boolean ok = true;

            if (P + L <= X) {
                for (int i = 0; i < L; i++) {
                    if (S[P + i] != '-') {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    for (int i = 0; i < L; i++)
                        S[P + i] = str.charAt(i);
                }
            }
        }

        System.out.println(new String(S));
    }
}