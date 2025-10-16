import java.util.Scanner;
public class StringPattern {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int len = s.length();
        for(int i=0;i<len;i++){
            if(Character.isDigit(s.charAt(i))){
                int d = s.charAt(i) - '0', cnt = 0, j = i+1;
                while(cnt < d){
                    if(Character.isAlphabetic(s.charAt(j % len))){
                        System.out.print(s.charAt(j % len));
                        cnt++;
                    }
                    j++;
                }
                System.out.println();
            }
        }
        sc.close();
    }
}