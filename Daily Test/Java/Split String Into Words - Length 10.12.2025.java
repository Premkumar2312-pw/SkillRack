import java.util.*;

public class Main {
    static class Item {
        String word;
        int len;
        int idx;
        Item(String w, int l, int i) { word = w; len = l; idx = i; }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String s = sc.next();
        int[] m = new int[n];
        for (int i = 0; i < n; i++) m[i] = sc.nextInt();

        List<Item> list = new ArrayList<>();
        int pos = 0;

        for (int i = 0; i < n; i++) {
            String w = s.substring(pos, pos + m[i]);
            list.add(new Item(w, m[i], i));
            pos += m[i];
        }

        Collections.sort(list, (a, b) -> {
            if (a.len != b.len) return a.len - b.len;
            return a.idx - b.idx;  // preserve order
        });

        StringBuilder out = new StringBuilder();
        for (Item it : list) out.append(it.word);
        System.out.print(out.toString());
    }
}