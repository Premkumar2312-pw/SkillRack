import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.next();
        LinkedList<Character> st = new LinkedList<>();
        for (char i : S.toCharArray()) {
            if (Character.isLetter(i))
                st.add(i);
            else {
                int times = i - '0';
                for (int j = 0; j < times; j++)
                    System.out.print(st.peekFirst());
                st.removeFirst();
            }
        }
    }
}
