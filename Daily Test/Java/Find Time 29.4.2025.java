import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int a[] = new int[n];
        
        for (int i = 0; i < n; i++) 
            a[i] = sc.nextInt();
        
        ArrayList<int[]> t = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && 0 <= a[i] && a[i] <= 23 && 0 <= a[j] && a[j] <= 59)
                    t.add(new int[] {a[i], a[j]});
            }
        }
        
        if (t.isEmpty()) 
            System.out.print("-1");
        else {
            int mh = 0, mm = 0;
            for (int[] x : t) {
                if (x[0] > mh || (x[0] == mh && x[1] > mm)) {
                    mh = x[0];
                    mm = x[1];
                }
            }
            System.out.printf("%02d:%02d", mh, mm);
        }
    }
}