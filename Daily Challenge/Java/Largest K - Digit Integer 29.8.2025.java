import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String n=sc.next();
        int k=sc.nextInt();
        if(n.length() < k) {
            System.out.println(-1);
            return;
        }
        int max=-1;
        for(int i=0; i<=n.length()-k; i++) {
            int val = Integer.parseInt(n.substring(i,i+k));
            if(val > max) max=val;
        }
        System.out.println(max);
    }
}
