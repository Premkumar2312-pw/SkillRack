import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String[] a = sc.nextLine().split(" ");
        String[] b = sc.nextLine().split(" ");

        if(a.length != b.length) {
            System.out.println("NO");
            return;
        }

        for(int i = 0; i < a.length; i++) {

            if(a[i].length() != b[i].length()) {
                System.out.println("NO");
                return;
            }

            for(char ch : a[i].toCharArray()) {
                if(b[i].indexOf(ch) != -1) {
                    System.out.println("NO");
                    return;
                }
            }
        }

        System.out.println("YES");
        sc.close();
    }
}