import java.util.*;

class Main {
    public static String toBinary(int n) {
        StringBuilder sb = new StringBuilder();
        while (n > 0) {
            sb.append(n % 2);
            n /= 2;
        }
        return sb.toString();  // reversed binary
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        boolean found = false;

        for (int i = 0; i < n - 1; i++) {
            String bi = toBinary(arr[i]);

            for (int j = i + 1; j < n; j++) {
                String bj = toBinary(arr[j]);
                String revbj = new StringBuilder(bj).reverse().toString();

                if (bi.equals(revbj)) {
                    System.out.println(arr[i] + " " + arr[j]);
                    found = true;
                }
            }
        }

        if (!found)
            System.out.println(-1);
    }
}