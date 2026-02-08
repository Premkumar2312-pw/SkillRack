import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] roll = new int[n];
        int[] A = new int[n];
        int[] B = new int[n];
        int[] C = new int[n];

        for (int i = 0; i < n; i++)
            roll[i] = sc.nextInt();
            A[i] = sc.nextInt();
            B[i] = sc.nextInt();
            C[i] = sc.nextInt();

        int q = sc.nextInt();

        while (q-- > 0) {
            char ch = sc.next().charAt(0);
            char s = sc.next().charAt(0);
            char o = sc.next().charAt(0);
            int v = sc.nextInt();

            boolean found = false;

            for (int i = 0; i < n; i++) {
                int mark = (s == 'A') ? A[i] : (s == 'B') ? B[i] : C[i];

                boolean ok = (o == '<' && mark < v) ||
                             (o == '>' && mark > v) ||
                             (o == '=' && mark == v);

                if (ok) {
                    found = true;
                    if (ch == '*')
                        System.out.println(roll[i] + " " + A[i] + " " + B[i] + " " + C[i]);
                    else if (ch == 'A') System.out.println(A[i]);
                    else if (ch == 'B') System.out.println(B[i]);
                    else if (ch == 'C') System.out.println(C[i]);
                }
            }
            if (!found) System.out.println("-1");
        }
    }
}