import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int sum = 0, i = 0, len = s.length();
        while (i < len) {
            StringBuilder temp = new StringBuilder();
            char cur = s.charAt(i);
            while (i < len && s.charAt(i) == cur) {
                temp.append(s.charAt(i));
                i++;
            }
            sum += Integer.parseInt(temp.toString());
        }
        System.out.println(sum);
        sc.close();
    }
}