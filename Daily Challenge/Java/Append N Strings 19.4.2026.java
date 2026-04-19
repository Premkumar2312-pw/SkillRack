import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        String[] str = new String[n];

        for(int i = 0; i < n; i++) {
            str[i] = s.next();
        }

        for(int i = n - 1; i >= 0; i--) {
            System.out.print(str[i]);
        }
    }
}