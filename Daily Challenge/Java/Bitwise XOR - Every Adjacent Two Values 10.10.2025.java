import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        for(int i=0;i<N;i++)
            arr[i]=sc.nextInt();
        while(N>1) {
            int[] res = new int[N-1];
            for(int i=0;i<N-1;i++)
                res[i]=arr[i]^arr[i+1];
            for(int x:res)
                System.out.print(x+" ");
            System.out.println();
            arr=res;
            N--;
        }
    }
}