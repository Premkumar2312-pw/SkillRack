import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] num = new int[n];
        for (int i = 0; i < n; i++)
            num[i] = sc.nextInt();

        int x = sc.nextInt();
        int y = x;

        for (int v : num) {
            if (v == x)
                x *= 2;
        }

        System.out.print(x == y ? 0 : x);
    }
}