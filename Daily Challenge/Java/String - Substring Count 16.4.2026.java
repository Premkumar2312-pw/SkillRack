import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String e = sc.next();

        int cnt = 0;

        for(int i = 0; i < s.length(); i++) {
            for(int j = i; j < s.length(); j++) {
                String sub = s.substring(i, j + 1);
                if(sub.equals(e)) {
                    cnt++;
                }
            }
        }

        System.out.println(cnt);
    }
}


//2nd
import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String a = sc.next();
        String b = sc.next();

        int count = 0;
        int index = 0;

        while((index = a.indexOf(b, index)) != -1) {
            count++;
            index++;  // move forward (for overlapping)
        }

        System.out.println(count);
    }
}