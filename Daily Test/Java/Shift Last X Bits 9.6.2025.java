import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        int x = sc.nextInt();

        String b = String.format("%32s", Long.toBinaryString(n)).replace(' ', '0');
        String last = b.substring(32 - x);
        String rotated = last.charAt(x - 1) + last.substring(0, x - 1);
        String result = b.substring(0, 32 - x) + rotated;
        System.out.println(Long.parseUnsignedLong(result, 2));
    }
}