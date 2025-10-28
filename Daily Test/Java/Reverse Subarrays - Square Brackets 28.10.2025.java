import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();
        List<Integer> l = new ArrayList<>();
        StringBuilder p = new StringBuilder();
        int i = 0;
        while (i < n.length()) {
            if (n.charAt(i) == '[') {
                List<Integer> l1 = new ArrayList<>();
                i++;
                while (i < n.length() && n.charAt(i) != ']') {
                    if (Character.isDigit(n.charAt(i))) {
                        p.append(n.charAt(i));
                    } else if (n.charAt(i) == ' ') {
                        if (p.length() > 0) {
                            l1.add(Integer.parseInt(p.toString()));
                            p.setLength(0);
                        }
                    }
                    i++;
                }
                if (p.length() > 0) {
                    l1.add(Integer.parseInt(p.toString()));
                    p.setLength(0);
                }
                for (int j = l1.size() - 1; j >= 0; j--) l.add(l1.get(j));
            } else if (Character.isDigit(n.charAt(i))) {
                p.append(n.charAt(i));
            } else if (n.charAt(i) == ' ') {
                if (p.length() > 0) {
                    l.add(Integer.parseInt(p.toString()));
                    p.setLength(0);
                }
            }
            i++;
        }
        if (p.length() > 0) l.add(Integer.parseInt(p.toString()));
        int sum = 0;
        for (int x : l) {
            System.out.print(x + " ");
            sum += x;
        }
        System.out.println();
        System.out.println(sum);
    }
}