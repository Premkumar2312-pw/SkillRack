import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        for (int x : arr) {
            int sum = 0, prod = 1;
            int temp = x;

            while (temp > 0) {
                int d = temp % 10;
                sum += d;
                prod *= d;
                temp /= 10;
            }

            System.out.print(Math.max(sum, prod) + " ");
        }
    }
}