import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder words = new StringBuilder();
        int rowcount = 0;
        int sum = 0;

        while (sc.hasNext()) {
            String str = sc.next();
            rowcount++;

            if ((rowcount & 1) == 1) {
                words.append(str).append(" ");
            } else {
                sum += Integer.parseInt(str);
            }
        }
        System.out.println(words.toString().trim());
        System.out.println(sum);
    }
}