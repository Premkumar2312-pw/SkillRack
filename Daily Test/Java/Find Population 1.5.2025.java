import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] b = new int[n];
        int[] d = new int[n];

        for(int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
            d[i] = sc.nextInt();
        }

        int y = sc.nextInt();
        int c = 0;

        for(int i = 0; i < n; i++) {
            if(b[i] <= y && y < d[i]) c++;
        }

        System.out.println(c);
    }
}