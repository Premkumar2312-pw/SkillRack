import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] arr = new int[n][2]; // [original value, computed value]
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            int val = Integer.parseInt(s), calc = 0;
            for (char ch : s.toCharArray()) {
                int digit = ch - '0';
                String binary = Integer.toBinaryString(digit);
                int binVal = Integer.parseInt(binary);
                calc += digit * binVal;
            }
            arr[i][0] = val;
            arr[i][1] = calc;
        }
        Arrays.sort(arr, (a, b) -> a[1] == b[1] ? a[0] - b[0] : a[1] - b[1]);
        for (int i = 0; i < n; i++) System.out.print(arr[i][0] + " ");
    }
}