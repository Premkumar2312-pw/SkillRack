import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n > 0) {
            int d = n % 10;
            while(d > 0) {
                System.out.print(d);
                if(n % 2 == 0)
                    break;
                d--;
            }
            n = n / 10;
        }
    }
}