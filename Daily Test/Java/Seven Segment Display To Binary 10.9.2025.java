import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] d = {
            "111110", "011000", "1101101", "1111001", "0110011",
            "1011011", "1011111", "1110000", "1111111", "1111011"
        };
        Scanner sc = new Scanner(System.in);
        String N = sc.nextLine().trim();
        StringBuilder res = new StringBuilder();
        for (char c : N.toCharArray())
            res.append(d[c-'0']);
        int num = Integer.parseInt(res.toString(), 2);
        System.out.println(num);
    }
}
