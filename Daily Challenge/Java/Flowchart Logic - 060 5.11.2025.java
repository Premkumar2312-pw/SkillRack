import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int D1 = sc.nextInt();
        int D2 = sc.nextInt();
        boolean ok = true;
        while (N > 0) {
            int d = N % 10;
            if (d < D1 || d > D2) {
                System.out.println("NO");
                ok = false;
                break;
            }
            N /= 10;
        }
        if (ok)
            System.out.println("YES");
    }
}