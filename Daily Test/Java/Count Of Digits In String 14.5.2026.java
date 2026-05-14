import java.util.*;

public class Hello {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int x = s.nextInt();

        String[] str = new String[n];

        for(int i = 0; i < n; i++){
            str[i] = s.next();
        }

        for(String w : str){

            int cnt = 0;

            for(char ch : w.toCharArray()){

                if(Character.isDigit(ch) && (ch - '0') == x){
                    cnt++;
                }
            }

            System.out.print(cnt + " ");
        }
    }
}