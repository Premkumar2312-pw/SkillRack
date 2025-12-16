import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = sc.nextInt();

        StringBuilder l1 = new StringBuilder();
        StringBuilder l2 = new StringBuilder();

        for (char ch : s.toCharArray()) {
            if (Character.isLetter(ch))
                l1.append(ch);
            else
                l2.append(ch);
        }

        int a = l1.length() / (n * n);
        int b = l2.length() / (n * n);

        int c = a, d = b;

        ArrayList<ArrayList<String>> m1 = new ArrayList<>();
        ArrayList<ArrayList<String>> m2 = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            ArrayList<String> r1 = new ArrayList<>();
            ArrayList<String> r2 = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                r2.add(l2.substring(d - b, d));
                d += b;
                r1.add(l1.substring(c - a, c));
                c += a;
            }
            m1.add(r1);
            m2.add(r2);
        }

        for (ArrayList<String> r : m1) {
            for (String x : r) System.out.print(x + " ");
            System.out.println();
        }
        for (ArrayList<String> r : m2) {
            for (String x : r) System.out.print(x + " ");
            System.out.println();
        }
    }
}