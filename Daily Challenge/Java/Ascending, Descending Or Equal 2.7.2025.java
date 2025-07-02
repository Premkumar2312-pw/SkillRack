import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        boolean eq = true, asc = true;

        for(int i = 0; i < n; i++)
            a[i] = sc.nextInt();

        for(int i = 1; i < n; i++) {
            if(a[i] != a[0]) eq = false;
            if(a[i] < a[i - 1]) asc = false;
        }

        if(eq)
            System.out.println("Equal");
        else if(asc)
            System.out.println("Ascending");
        else
            System.out.println("Descending");
    }
}