import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> l = new ArrayList<>();

        while (sc.hasNext()) l.add(sc.next());

        int[] l2 = new int[l.size()];
        ArrayList<String> l1 = new ArrayList<>();
        ArrayList<String> l3 = new ArrayList<>();

        for (int i = 0; i < l.size(); i++) {
            if (l2[i] == 1) continue;
            boolean f = false;
            for (int j = i + 1; j < l.size(); j++) {
                if (l.get(i).equals(l.get(j)) && l2[j] == 0) {
                    l1.add(String.valueOf(
                        Integer.parseInt(l.get(i)) + Integer.parseInt(l.get(j))
                    ));
                    l2[j] = 1;
                    f = true;
                    break;
                }
            }
            if (!f) l1.add(l.get(i));
            l2[i] = 1;
        }

        for (String s : l1)
            if (Character.isLetter(s.charAt(0)))
                l3.add(s);

        Collections.sort(l3);
        for (String s : l3)
            System.out.print(s + " ");
    }
}