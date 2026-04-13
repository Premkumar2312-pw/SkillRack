import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int m = s.nextInt();

        int num = m;

        for(int i = 1; i <= m; i++) {

            for(int j = 1; j < i; j++) {
                System.out.print("+ ");
            }

            for(int j = 1; j <= num; j++) {
                System.out.print(num + " ");
            }

            System.out.println();
            num--;
        }
    }
}