import java.util.*;

public class InputProcess {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<String> l = new ArrayList<>();

        while (sc.hasNextLine()) {
            String s = sc.nextLine().trim();
            if (s.isEmpty()) break; // optional: stop on empty line, or remove to go till EOF
            l.add(s);
        }

        int a = 0, b = 0;

        for (String i : l) {
            if (i.length() > 1 && i.charAt(0) == '-' && i.charAt(1) == '-') {
                int num = Integer.parseInt(i.substring(2));
                for (int j = 1; j <= num; j++) {
                    System.out.println(a + "." + b + "." + j);
                }
                b++;
            } else if (i.length() > 0 && i.charAt(0) == '-') {
                a++;
                b = 1;
            }
        }
        sc.close();
    }
}