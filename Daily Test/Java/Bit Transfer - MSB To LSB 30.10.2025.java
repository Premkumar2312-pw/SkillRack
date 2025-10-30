import java.util.Scanner;

public class BinaryTransform {
    public static String toBinary(int n) {
        String s = Integer.toBinaryString(n);
        return s;
    }

    public static int binaryStringToInt(String bin) {
        return Integer.parseInt(bin, 2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();

        for (int i = 0; i < n; i++) {
            String bin = toBinary(arr[i]);
            if (bin.length() < 3) {
                // not enough length to slice
                System.out.print(arr[i] + " ");
                continue;
            }
            String part1 = "";
            if (bin.length() > 3) {
                part1 = bin.substring(3);
            }
            char ch = bin.charAt(2);
            String newbin = part1 + ch;
            int val = binaryStringToInt(newbin);
            System.out.print(val + " ");
        }
        sc.close();
    }
}