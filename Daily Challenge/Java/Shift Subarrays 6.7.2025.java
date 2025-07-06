import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        int q = sc.nextInt();
        while(q-- > 0) {
            int x = sc.nextInt() - 1;
            int y = sc.nextInt() - 1;
            char d = sc.next().charAt(0);
            if(d == 'L') {
                int t = a[x];
                for(int i = x; i < y; i++) a[i] = a[i+1];
                a[y] = t;
            } else {
                int t = a[y];
                for(int i = y; i > x; i--) a[i] = a[i-1];
                a[x] = t;
            }
            for(int i = 0; i < n; i++) System.out.print(a[i] + " ");
            System.out.println();
        }
        sc.close();
    }
}