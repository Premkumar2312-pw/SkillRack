import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt(), num2 = sc.nextInt();
        int a = num1, b = num2;
        while(a > 0) {
            b = b * 10 + (a % 10);
            a /= 10;
        }
        int sum1 = b;
        a = num1; b = sum1;
        while(b > 0) {
            a = a * 10 + (b % 10);
            b /= 10;
        }
        sum1 += a;
        System.out.println(sum1);
    }
}