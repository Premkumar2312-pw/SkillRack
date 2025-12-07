import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] a = new int[r][c];
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        int x = sc.nextInt(), y = sc.nextInt();
        int m = x-1, n = y-1, w = c-y+1;
        
        ArrayList<Integer> l = new ArrayList<>();
        for(int i = 0; i < x; i++) {
            for(int j = n; j < n+w; j++) {
                l.add(a[i][j]);
            }
        }
        Collections.sort(l);
        
        int k = 0;
        for(int i = 0; i < x; i++) {
            for(int j = n; j < n+w; j++) {
                a[i][j] = l.get(k++);
            }
        }
        
        for(int[] row : a) {
            for(int val : row) {
                System.out.print(val + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}