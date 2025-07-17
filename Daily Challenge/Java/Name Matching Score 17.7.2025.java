import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();
        int[] v1 = new int[s1.length()];
        int[] v2 = new int[s2.length()];
        int scVal = 0;

        for (int i = 0; i < Math.min(s1.length(), s2.length()); i++) {
            if (s1.charAt(i) == s2.charAt(i)) {
                v1[i] = v2[i] = 1;
                scVal += 2;
            }
        }

        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                if (s1.charAt(i) == s2.charAt(j) && v1[i] == 0 && v2[j] == 0) {
                    v1[i] = v2[j] = 1;
                    scVal += 1;
                    break;
                }
            }
        }

        System.out.println(scVal);
    }
}