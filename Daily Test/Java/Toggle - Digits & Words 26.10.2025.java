import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] L = {"zero","one","two","three","four","five","six","seven","eight","nine"};
        Scanner sc = new Scanner(System.in);
        String s = sc.next().trim();
        int i = 0, len = s.length();
        while (i < len) {
            char ch = s.charAt(i);
            if (Character.isDigit(ch)) {
                System.out.print(ch);
                i++;
            } else {
                StringBuilder p = new StringBuilder();
                while (i < len && Character.isLetter(s.charAt(i))) {
                    p.append(s.charAt(i++));
                }
                for (int j = 0; j < L.length; j++) {
                    if (p.toString().equals(L[j])) {
                        System.out.print(j);
                        break;
                    }
                }
            }
        }
    }
}