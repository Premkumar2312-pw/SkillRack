import java.util.*;

public class Hello {

    public static boolean isVow(char ch){
        return "aeiouAEIOU".indexOf(ch) != -1;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.next();

        char[] ch = str.toCharArray();
        int idx = -1;

        for(int i = 0; i < ch.length; i++)
            if(isVow(ch[i])) idx = i;

        int i = 0, j = idx;
        while(i < j){
            char temp = ch[i];
            ch[i] = ch[j];
            ch[j] = temp;
            i++; j--;
        }

        System.out.println(new String(ch));
    }
}