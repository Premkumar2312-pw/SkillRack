import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        int sum = 0;
        for(int i = 0; i < n.length(); i++) {
            StringBuilder temp = new StringBuilder(n);
            temp.setCharAt(i, (char)((n.charAt(i) - '0') * (n.charAt(i) - '0') + '0'));
            sum += Integer.parseInt(temp.toString());
        }
        System.out.println(sum);
    }
}