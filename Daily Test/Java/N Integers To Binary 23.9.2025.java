import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] l = new int[n];
        int maxv = 0;
        for (int i = 0; i < n; i++) {
            l[i] = sc.nextInt();
            maxv = Math.max(maxv, l[i]);
        }
        int a = Integer.toBinaryString(maxv).length();
        List<String> m = new ArrayList<>();
        StringBuilder d = new StringBuilder();
        for (int i = 0; i < n; i++) {
            String bin = Integer.toBinaryString(l[i]);
            String pad = String.format("%" + a + "s", bin).replace(' ', '0');
            String rev = new StringBuilder(pad).reverse().toString();
            m.add(rev);
            if (i < rev.length()) d.append(rev.charAt(i));
        }
        d.reverse();
        System.out.println(Integer.parseInt(d.toString(), 2));
    }
}