import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int root = (int)Math.sqrt(n);
        int lower = root * root;
        int upper = (root + 1) * (root + 1);

        System.out.println((n - lower <= upper - n) ? lower : upper);
    }
}
