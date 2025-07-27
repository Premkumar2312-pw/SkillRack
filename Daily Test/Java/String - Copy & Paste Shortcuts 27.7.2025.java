import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<String> r = new ArrayList<>(), c = new ArrayList<>();
        while (sc.hasNext()) {
            String w = sc.next();
            if (w.equals("Ctrl+C")) c = new ArrayList<>(r);
            else if (w.equals("Ctrl+V")) r.addAll(c);
            else r.add(w);
        }
        for (String word : r) System.out.print(word + " ");
    }
}