import java.util.*;

public class Main {
    static boolean isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) return false;
        return true;
    }

    static void generatePermutations(String prefix, String s, Set<Integer> res) {
        if (!prefix.isEmpty()) {
            if (prefix.charAt(0) != '0') {
                int num = Integer.parseInt(prefix);
                if (isPrime(num)) res.add(num);
            }
        }
        if (prefix.length() == 3) return;
        for (int i = 0; i < s.length(); i++)
            generatePermutations(prefix + s.charAt(i), s.substring(0, i) + s.substring(i + 1), res);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine(), digits = "";
        for (char c : input.toCharArray())
            if (Character.isDigit(c)) digits += c;

        Set<Integer> res = new TreeSet<>();
        generatePermutations("", digits, res);
        for (int n : res) System.out.print(n + " ");
    }
}