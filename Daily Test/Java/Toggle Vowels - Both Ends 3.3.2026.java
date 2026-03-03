import java.util.*;

public class Main {

    static boolean isVowel(char ch) {
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        while(true) {
            int first = -1, last = -1;

            for(int i = 0; i < s.length(); i++) {
                if(isVowel(s.charAt(i))) {
                    if(first == -1)
                        first = i;
                    last = i;
                }
            }

            if(first == -1)
                break;

            char[] arr = s.toCharArray();
            arr[first] = Character.toUpperCase(arr[first]);

            if(first != last)
                arr[last] = Character.toUpperCase(arr[last]);

            s = new String(arr);
        }

        System.out.println(s);
        sc.close();
    }
}