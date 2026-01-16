import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        while (true) {
            int count = 0;
            for (char c : s.toCharArray()) {
                if (c == '1') count++;
            }

            System.out.print(count);

            if (count == 1) break;

            System.out.print(" ");
            s = Integer.toBinaryString(count);
        }
    }
}