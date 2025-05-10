import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Pattern pattern = Pattern.compile("\\d+|[A-Za-z]+");
        Matcher matcher = pattern.matcher(s);
        
        int num = 0;
        String word = "";
        
        while (matcher.find()) {
            String part = matcher.group();
            if (Character.isDigit(part.charAt(0))) {
                num = Integer.parseInt(part);
            } else {
                word = part;
                for (int i = 0; i < num; i++) {
                    System.out.print(word + " ");
                }
            }
        }
        sc.close();
    }
}