import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt();
        int maxVal = x * y;
        char op = '*';

        int res = x - y;
        if(res > maxVal) { maxVal = res; op = '-'; }

        res = x + y;
        if(res > maxVal) { maxVal = res; op = '+'; }

        if(y != 0) {
            res = x / y;
            if(res > maxVal) { maxVal = res; op = '/'; }
        }

        System.out.println(op);
    }
}