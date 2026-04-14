import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int m = s.nextInt();

        int[] arr = new int[n];

        for(int i = 0; i < n; i++)
            arr[i] = s.nextInt();

        if(m <= 0) return;

        for(int i = m - 1; i < n; i += m)
            System.out.print(arr[i] + " ");
    }
}