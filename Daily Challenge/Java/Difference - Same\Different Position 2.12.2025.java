import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        
        int[] b = a.clone();      // copy original
        Arrays.sort(b);           // sorted array
        
        int X = 0, Y = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) 
                X += a[i];        // same position
            else 
                Y += a[i];        // changed position
        }
        
        System.out.println(Math.abs(X - Y));
    }
}