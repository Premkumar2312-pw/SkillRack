import java.util.*;

public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt(), b=sc.nextInt(), c=sc.nextInt();

        int[] l={a,b,c};
        Arrays.sort(l);

        int e=l[1];

        if(l[0]!=e && l[2]!=e)
            System.out.println(e);
        else
            System.out.println(-1);
    }
}