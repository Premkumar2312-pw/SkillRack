import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        
        for(int i = 0; i < n; i++)
            a[i] = sc.nextInt();
        
        for(int i = 0; i < n; i++) {
            int idx = (a[i] > 0) ? a[i] - 1 : a[i];
            System.out.print(a[i] * a[idx] + " ");
        }
    }
}