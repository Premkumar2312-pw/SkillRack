import java.util.*;

public class Main {
    static class Pair implements Comparable<Pair> {
        String letter;
        int number;
        Pair(String l, int n) {
            letter = l;
            number = n;
        }
        public int compareTo(Pair o) {
            int cmp = this.letter.compareTo(o.letter);
            return cmp != 0 ? cmp : Integer.compare(this.number, o.number);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Pair> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String str = sc.next();
            StringBuilder letters = new StringBuilder(), digits = new StringBuilder();
            for (char ch : str.toCharArray()) {
                if (Character.isLetter(ch)) letters.append(ch);
                else if (Character.isDigit(ch)) digits.append(ch);
            }
            list.add(new Pair(letters.toString(), Integer.parseInt(digits.toString())));
        }
        Collections.sort(list);
        for (Pair p : list) {
            System.out.print(p.number + " ");
        }
    }
}