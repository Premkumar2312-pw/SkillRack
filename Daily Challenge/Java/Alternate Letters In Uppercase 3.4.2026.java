import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        StringBuilder res = new StringBuilder();

        for(String w : words){
            for(int i = 0; i < w.length(); i++){
                if(i % 2 == 0)
                    res.append(Character.toUpperCase(w.charAt(i)));
                else
                    res.append(Character.toLowerCase(w.charAt(i)));
            }
            res.append(" ");
        }

        System.out.print(res.toString().trim());
    }
}