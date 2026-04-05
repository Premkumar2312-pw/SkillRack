import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        long n = s.nextLong();

        if(n > 0 && (n & (n - 1)) == 0)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}