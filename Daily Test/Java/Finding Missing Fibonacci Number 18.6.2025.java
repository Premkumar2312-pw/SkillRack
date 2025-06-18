import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        Arrays.sort(a);

        int f = -1;
        if(a[0] + a[1] != a[2]) {
            int d = a[1] - a[0];
            for(int i = 0; i < d; i++) {
                if((i + 1) + a[1] == a[2]) {
                    f = i + 1;
                    break;
                }
            }
        }

        if(f != -1) {
            System.out.print(f);
            return;
        }

        for(int i = 2; i < n; i++) {
            if(a[i] != a[i-1] + a[i-2]) {
                System.out.print(a[i-1] + a[i-2]);
                return;
            }
        }

        System.out.print(a[n - 1]);
    }
}