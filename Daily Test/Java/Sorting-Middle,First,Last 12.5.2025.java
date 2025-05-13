import java.util.*;

class StringWithIndex {
    String str;
    int index;

    StringWithIndex(String str, int index) {
        this.str = str;
        this.index = index;
    }
}

public class SortStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        List<StringWithIndex> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            list.add(new StringWithIndex(sc.nextLine(), i));
        }

        Collections.sort(list, (a, b) -> {
            int midA = a.str.length() / 2;
            int midB = b.str.length() / 2;
            char aMid = a.str.charAt(midA);
            char bMid = b.str.charAt(midB);

            if (aMid != bMid) return aMid - bMid;
            if (a.str.charAt(0) != b.str.charAt(0)) 
                return a.str.charAt(0) - b.str.charAt(0);
            if (a.str.charAt(a.str.length() - 1) != b.str.charAt(b.str.length() - 1))
                return a.str.charAt(a.str.length() - 1) - b.str.charAt(b.str.length() - 1);
            return a.index - b.index;
        });

        for (StringWithIndex s : list) {
            System.out.println(s.str);
        }

        sc.close();
    }
}