import java.util.*;

public class Main {
    public static String toBinary(int n) {
        return Integer.toBinaryString(n);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), n = sc.nextInt(), c = 0;
        String xb = toBinary(x);
        for(int i = 0; i < n; i++) {
            int val = sc.nextInt();
            String vb = toBinary(val);
            if(xb.endsWith(vb)) c++;
        }
        System.out.println(c);
    }
}