import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine().trim();
        String s2 = sc.nextLine().trim();
        int total_moves = 0;

        for (int i = 0; i < s1.length(); i++) {
            int d1 = s1.charAt(i) - '0';
            int d2 = s2.charAt(i) - '0';
            int clockwise = Math.abs(d1 - d2);
            int anticlockwise = 10 - clockwise;
            total_moves += Math.min(clockwise, anticlockwise);
        }

        System.out.println(total_moves);
    }
}