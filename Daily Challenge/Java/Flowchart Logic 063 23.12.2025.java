import java.util.*;

public class Main {
    public static void main(String[] args) {
        int num, val, count;
        val = 0;
        count = 0;
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();

        while (num > 0) {
            if (num % 10 != 0) {
                val = (val * 10) + (num % 10);
            } else {
                count += 1;
            }
            num /= 10;
        }

        while (count > 0) {
            val = val * 10;
            count -= 1;
        }
        System.out.println(val);
        sc.close();
    }
}