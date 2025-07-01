import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        String[] words = line.split(" ");
        int n = words.length;
        int maxLen = 0;

        for (String w : words)
            if (w.length() > maxLen) maxLen = w.length();

        String[] padded = new String[n];
        for (int i = 0; i < n; i++) {
            int pad = maxLen - words[i].length();
            if ((i + 1) % 2 == 1) {
                padded[i] = words[i] + "*".repeat(pad);
            } else {
                padded[i] = "*".repeat(pad) + words[i];
            }
        }

        for (int row = 0; row < maxLen; row++) {
            for (int col = 0; col < n; col++) {
                System.out.print(padded[col].charAt(row));
            }
            System.out.println();
        }
    }
}