import java.util.*;
public class Main {
    public static int getNum(String w){
        String num = "";
        for(char c : w.toCharArray())
            if(Character.isDigit(c)) num += c;
        return Integer.parseInt(num);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        Arrays.sort(words, (a, b) -> getNum(a) - getNum(b));
        for(String w : words) System.out.print(w + " ");
    }
}