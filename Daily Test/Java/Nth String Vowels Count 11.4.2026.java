import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine();

        int max = 0;
        String res = "";

        for(int i = 0; i < n; i++) {
            String s = sc.nextLine();
            int count = 0;

            for(char c : s.toLowerCase().toCharArray()) {
                if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
                    count++;
                }
            }

            if(count > max) {
                max = count;
                res = s;
            }
        }

        System.out.println(res);
    }
}