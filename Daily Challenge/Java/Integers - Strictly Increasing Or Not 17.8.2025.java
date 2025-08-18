import java.util.*;

class Main {
    static class Pair {
        char ch;
        int num;
        Pair(char c, int n) { ch = c; num = n; }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine());
        List<Pair> list = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            String s = sc.nextLine().trim();
            int num = Integer.parseInt(s.substring(0, s.length()-1));
            char ch = Character.toLowerCase(s.charAt(s.length()-1));
            list.add(new Pair(ch, num));
        }

        list.sort(Comparator.comparing(p -> p.ch));
        boolean ok = true;
        for (int i = 0; i < N-1; i++) {
            if (list.get(i).num >= list.get(i+1).num) {
                ok = false;
                break;
            }
        }
        System.out.println(ok ? "Yes" : "No");
    }
}