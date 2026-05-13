import java.util.*;
public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int dash = 1;
        for(int i = n; i >= 1; i--){
            for(int j = 1; j <= i; j++){
                System.out.print(i);
            }
            for(int k = 1; k <= dash; k++){
                System.out.print("-");
            }
            dash += 2;
            for(int j = 1; j <= i; j++){
                System.out.print(i);
            }
            System.out.println();
        }
    }
}
