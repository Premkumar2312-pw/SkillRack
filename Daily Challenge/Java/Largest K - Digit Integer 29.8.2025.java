import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        int[] w=new int[26];
        w[0]=0; w[1]=1;
        for(int i=2;i<26;i++) w[i]=w[i-2]+w[i-1];
        int sum=0;
        for(char c : s.toLowerCase().toCharArray()) {
            sum+=w[c-'a'];
        }
        System.out.println(sum);
    }
}
