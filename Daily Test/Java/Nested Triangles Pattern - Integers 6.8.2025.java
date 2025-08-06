import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<=n;i++){
            System.out.print("*");
            for(int j=1;j<=i;j++) System.out.print(j);
            for(int j=i-1;j>0;j--) System.out.print(j);
            if(i>0) System.out.print("*");
            System.out.println();
        }
        for(int i=n-1;i>=0;i--){
            System.out.print("*");
            for(int j=1;j<=i;j++) System.out.print(j);
            for(int j=i-1;j>0;j--) System.out.print(j);
            if(i>0) System.out.print("*");
            System.out.println();
        }
    }
}