import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i = 0; i < n; i++){
            int num = sc.nextInt();

            int digits = 0;
            int temp = num;

            while(temp > 0){
                digits++;
                temp /= 10;
            }

            if(digits % 2 == 0){
                System.out.print(num + " ");
            }
        }
    }
}


//Built-in Approach 
import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(); // size
        for(int i = 0; i < n; i++){
            int num = sc.nextInt();

            int digits = String.valueOf(num).length();

            if(digits % 2 == 0){
                System.out.print(num + " ");
            }
        }
    }
}