import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        boolean inQuotes = false;
        StringBuilder word = new StringBuilder();

        for (char ch : s.toCharArray()) {
            if (ch == '"') {
                inQuotes = !inQuotes;
            } else if (ch == ' ' && !inQuotes) {
                if (word.length() > 0) {
                    System.out.println(word.toString());
                    word.setLength(0);
                }
            } else {
                word.append(ch);
            }
        }

        if (word.length() > 0) {
            System.out.println(word.toString());
        }

        sc.close();
    }
}