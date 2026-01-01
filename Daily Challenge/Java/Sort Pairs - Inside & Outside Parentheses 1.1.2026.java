import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        String[] l = new String[n];
        for (int i = 0; i < n; i++) l[i] = sc.next();

        ArrayList<Integer> l1 = new ArrayList<>();
        ArrayList<Integer> l2 = new ArrayList<>();
        ArrayList<Integer> pos = new ArrayList<>();

        for (String i : l) {
            int a = i.indexOf('(');
            int b = i.indexOf(')');
            pos.add(a);

            if (a == 0) {
                l2.add(Integer.parseInt(i.substring(b+1)));
                l1.add(Integer.parseInt(i.substring(a+1, b)));
            } else {
                l2.add(Integer.parseInt(i.substring(0, a)));
                l1.add(Integer.parseInt(i.substring(a+1, b)));
            }
        }

        Collections.sort(l1);
        l2.sort(Collections.reverseOrder());

        for (int i = 0; i < n; i++) {
            if (pos.get(i) == 0)
                System.out.print("(" + l1.get(i) + ")" + l2.get(i) + " ");
            else
                System.out.print(l2.get(i) + "(" + l1.get(i) + ") ");
        }
    }
}