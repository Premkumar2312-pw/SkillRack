import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char ch1 = sc.next().charAt(0);
        char ch2 = sc.next().charAt(0);
        int X = sc.nextInt();
        int Y = sc.nextInt();

        for (char a = ch1; a <= ch2; a++) {
            for (int n = X; n <= Y; n++) {
                for (char b = ch1; b <= ch2; b++) {
                    for (int m = X; m <= Y; m++) {
                        System.out.println("" + a + n + "." + b + "." + m);
                    }
                }
            }
        }
    }
}