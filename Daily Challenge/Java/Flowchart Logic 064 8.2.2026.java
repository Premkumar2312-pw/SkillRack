import java.util.*;
public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int a = s.nextInt();
        int b = s.nextInt();
        int c = s.nextInt();

        int val = 1, ctr = 1;

        while (ctr <= n) {
            System.out.print(val + " ");

            if (val == a)
                val = b;
            else if (val == c)
                val = 0;

            val++;
            ctr++;
        }
    }
}