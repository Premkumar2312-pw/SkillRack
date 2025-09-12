import java.util.*;

public class Main {
    static void fact(int n) {
        List<Integer> big = new ArrayList<>();
        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                System.out.print(i + " ");
                if (i != n / i) big.add(n / i);
            }
        }
        Collections.reverse(big);
        for (int v : big) System.out.print(v + " ");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), K = sc.nextInt();
        String[] arr = new String[N];
        for (int i = 0; i < N; i++) arr[i] = sc.next();

        for (int i = 0; i < N; i += K) {
            if (i + K <= N) {
                StringBuilder sb = new StringBuilder();
                for (int j = i; j < i + K; j++)
                    sb.append(arr[j].charAt(arr[j].length() - 1));
                int a = Integer.parseInt(sb.toString());
                if (a == 0) System.out.println("0");
                else { fact(a); System.out.println(); }
            }
        }
    }
}