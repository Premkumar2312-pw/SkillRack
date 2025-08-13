import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<String> a = new ArrayList<>();
        a.add("0");
        a.add("1");
        for (int i = 2; i < n; i++)
            a.add(a.get(i-2) + a.get(i-1));

        for (String s : a)
            System.out.println(s);
        for (int i = n-2; i >= 0; i--)
            System.out.println(a.get(i));
    }
}