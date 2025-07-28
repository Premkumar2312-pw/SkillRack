import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] t = new int[n];
        for(int i = 0; i < n; i++) t[i] = s.nextInt();
        if(n % 2 != 0) System.out.println(-1);
        else {
            int sum = 0;
            for(int i = 0; i < n; i += 2)
                sum += t[i+1] - t[i];
            System.out.println(sum);
        }
    }
}