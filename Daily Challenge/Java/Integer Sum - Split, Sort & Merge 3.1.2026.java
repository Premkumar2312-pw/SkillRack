import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] l = new String[n];
        for (int i = 0; i < n; i++) l[i] = sc.next();

        ArrayList<Integer> l1 = new ArrayList<>();
        ArrayList<Integer> l2 = new ArrayList<>();

        for (String i : l) {
            String p = "", g = "";
            for (char j : i.toCharArray()) {
                if (Character.isDigit(j)) {
                    p += j;
                    g += j;
                }
                if (j == '|') {
                    l2.add(Integer.parseInt(g));
                    g = "";
                }
            }
            l1.add(Integer.parseInt(p));
            l2.add(Integer.parseInt(g));
        }

        Collections.sort(l2);

        int sum1 = l1.stream().mapToInt(Integer::intValue).sum();
        int sum2 = 0;
        for (int i = 0; i < l2.size(); i += 2)
            sum2 += Integer.parseInt("" + l2.get(i) + l2.get(i + 1));

        System.out.println(sum1 + " " + sum2);
    }
}