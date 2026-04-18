import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String str = s.nextLine();
        int n = s.nextInt();

        int cnt = 0;

        for(int i = 0; i < str.length(); i++) {
            System.out.print(str.charAt(i));
            cnt++;

            if(cnt == n) {
                System.out.println();
                cnt = 0;
            }
        }
    }
}