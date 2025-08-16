import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int limit = n + 100;

        boolean[] p = new boolean[limit + 1];
        Arrays.fill(p, true);
        p[0] = p[1] = false;

        for (int i = 2; i * i <= limit; i++)
            if (p[i])
                for (int j = i * i; j <= limit; j += i)
                    p[j] = false;

        ArrayList<Integer> primes = new ArrayList<>();
        for (int i = 2; i <= limit; i++) if (p[i]) primes.add(i);

        for (int i = 0; i + 1 < primes.size(); i++) {
            if (primes.get(i) + primes.get(i+1) == 2 * n) {
                System.out.println(primes.get(i) + " " + primes.get(i+1));
                return;
            }
        }
        System.out.println(-1);
    }
}