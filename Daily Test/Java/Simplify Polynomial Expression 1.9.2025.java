import java.util.*;
import java.util.regex.*;

class Term {
    int coef, exp;
    Term(int c, int e) { coef = c; exp = e; }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.nextLine();

        ArrayList<Term> terms = new ArrayList<>();
        Pattern p = Pattern.compile("([+-]?\\d*)x\\^(\\d+)");
        Matcher m = p.matcher(S);

        while (m.find()) {
            String coefStr = m.group(1);
            int coef = coefStr.equals("") || coefStr.equals("+") ? 1 : 
                       coefStr.equals("-") ? -1 : Integer.parseInt(coefStr);
            int exp = Integer.parseInt(m.group(2));
            terms.add(new Term(coef, exp));
        }

        terms.sort((a, b) -> b.exp - a.exp);

        boolean flag = false;
        for (Term t : terms) {
            if (t.coef == 0) continue;
            if (t.coef > 0 && flag) System.out.print("+");
            System.out.print(t.coef + "x^" + t.exp);
            flag = true;
        }
        if (!flag) System.out.print("0");
    }
}