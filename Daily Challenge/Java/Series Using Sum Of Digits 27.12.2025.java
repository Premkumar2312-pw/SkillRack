import java.util.*;

public class Main {
    static int digitSum(int x) {
        int s = 0;
        while (x > 0) {
            s += x % 10;
            x /= 10;
        }
        return s;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        int[] l = new int[k];
        l[0] = n;

        for (int i = 1; i < k; i++)
            l[i] = l[i - 1] + digitSum(l[i - 1]);

        for (int x : l)
            System.out.print(x + " ");
    }
}