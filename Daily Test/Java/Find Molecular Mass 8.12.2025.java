import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        Map<String,Integer> mass = new HashMap<>();
        mass.put("H",1);
        mass.put("He",4);
        mass.put("C",12);
        mass.put("N",14);
        mass.put("O",16);
        mass.put("Mg",24);
        mass.put("S",32);
        mass.put("Ca",40);
        mass.put("Cu",63);

        int i = 0, total = 0;

        while (i < s.length()) {

            String sym = "" + s.charAt(i);
            i++;

            if (i < s.length() && Character.isLowerCase(s.charAt(i))) {
                sym += s.charAt(i);
                i++;
            }

            int cnt = 0;
            while (i < s.length() && Character.isDigit(s.charAt(i))) {
                cnt = cnt * 10 + (s.charAt(i) - '0');
                i++;
            }
            if (cnt == 0) cnt = 1;

            total += mass.get(sym) * cnt;
        }

        System.out.println(total);
    }
}