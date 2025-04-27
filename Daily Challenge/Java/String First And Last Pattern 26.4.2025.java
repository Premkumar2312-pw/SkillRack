import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int l = s.length();
        
        for (int i = 1; i <= l; i++) {
            for (int j = i - 1; j >= 0; j--) {
                System.out.print(s.charAt(j));
            }
            for (int j = l - i; j < l; j++) {
                System.out.print(s.charAt(j));
            }
            System.out.println();
        }
    }
}