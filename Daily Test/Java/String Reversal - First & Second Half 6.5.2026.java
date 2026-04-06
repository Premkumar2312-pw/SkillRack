import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        int n = s.length();
        int m = n / 2;

        StringBuilder first = new StringBuilder(s.substring(0, m)).reverse();

        if(n % 2 == 1){
            char mid = s.charAt(m);
            StringBuilder second = new StringBuilder(s.substring(m+1)).reverse();
            System.out.println(first + "" + mid + second);
        } else {
            StringBuilder second = new StringBuilder(s.substring(m)).reverse();
            System.out.println(first + "" + second);
        }
    }
}