import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), triangle = 0;
        int[] val = new int[N];
        for(int i = 0; i < N; i++) val[i] = sc.nextInt();
        for(int i = 0; i < N - 2; i++) {
            int a = val[i], b = val[i+1], c = val[i+2];
            if(a + b > c && a + c > b && b + c > a) triangle++;
        }
        System.out.println(triangle);
    }
}