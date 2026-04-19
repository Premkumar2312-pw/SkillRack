import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int x = s.nextInt();
        String str = s.next();

        int count = 0;

        for(int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);

            if("aeiouAEIOU".indexOf(c) != -1) {
                System.out.print(c);
                count++;
            }

            if(count == x) break;
        }
    }
}