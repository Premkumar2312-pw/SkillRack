import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), a[] = new int[n];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        for(int i = 0; i < n - 1; i++) {
            if((a[i] & a[i + 1]) != a[i]) {
                System.out.print("NO");
                return;
            }
        }
        System.out.print("YES");
    }
}