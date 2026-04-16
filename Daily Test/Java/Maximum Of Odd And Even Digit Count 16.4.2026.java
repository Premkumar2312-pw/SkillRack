import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int odd = 0, even = 0;

        while(n > 0) {
            if((n % 10) % 2 == 0)
                even++;
            else
                odd++;
            n /= 10;
        }

        System.out.println(Math.max(odd, even));
    }
}