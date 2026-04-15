import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int a = s.nextInt();
        int b = s.nextInt();

        int num;

        if(a % 10 == b % 10) {
            num = Math.max(a, b);
        } else {
            if(a % 10 < b % 10)
                num = a;
            else
                num = b;
        }

        System.out.println(num);
    }
}