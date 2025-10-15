import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> l = new ArrayList<>();
        while (sc.hasNextLine()) {
            String s = sc.nextLine();
            if (s.isEmpty()) break;
            l.add(s);
        }
        ArrayList<String> l2 = new ArrayList<>();
        if (l.get(0).length() == l.get(l.size()-1).length()) {
            for (String str : l)
                l2.add(str);
            for (int i = l.get(0).length() - 1; i > 0; i--) {
                for (int k = 0; k < l.size() - 1; k++)
                    System.out.print("* ");
                System.out.println(l.get(l.size()-1).charAt(i));
            }
            for (int i = l.size() - 1; i >= 0; i--)
                System.out.print(l2.get(i) + " ");
            System.out.println();
        } else {
            for (String str : l)
                l2.add(str);
            for (String str : l2)
                System.out.print(str + " ");
            System.out.println();
            for (int i = 1; i < l.get(l.size()-1).length(); i++) {
                for (int k = 0; k < l.size() - 1; k++)
                    System.out.print("* ");
                System.out.println(l.get(l.size()-1).charAt(i));
            }
        }
    }
}