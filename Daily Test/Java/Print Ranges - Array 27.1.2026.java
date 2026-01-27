import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] a = new int[n];

        for(int i = 0; i < n; i++)
            a[i] = sc.nextInt();

        Arrays.sort(a);

        boolean start = true;

        for(int i = 0; i < n - 1; i++) {
            if(start)
                System.out.print(a[i] + "-");

            if(a[i] == a[i+1] || a[i] == a[i+1] - 1)
                start = false;
            else {
                System.out.print(a[i] + " ");
                start = true;
            }
        }

        if(start)
            System.out.print(a[n-1] + "-" + a[n-1]);
        else
            System.out.print(a[n-1]);
    }
}