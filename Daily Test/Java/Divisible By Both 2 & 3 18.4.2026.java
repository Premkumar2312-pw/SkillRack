import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();

        for(int i = 0; i < n; i++) {
            int x = s.nextInt();

            if(x % 6 == 0) {
                System.out.print(x + " ");
            }
        }
    }
}