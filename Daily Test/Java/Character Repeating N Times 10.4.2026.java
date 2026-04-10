import java.util.*;
public class Hello {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.next();
        int n = s.nextInt();

        int[] freq = new int[26];
        Set<Character> set = new LinkedHashSet<>();

        for(char ch : str.toCharArray()){
            freq[ch - 'a']++;
        }

        for(int i = 0; i < str.length(); i++){
            if(freq[str.charAt(i) - 'a'] == n){
                set.add(str.charAt(i));
            }
        }

        for(char ch : set){
            System.out.print(ch);
        }
    }
}