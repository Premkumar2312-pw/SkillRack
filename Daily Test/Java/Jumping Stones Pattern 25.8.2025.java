import java.util.*;
public class Main {
    static void ab(int a, int b, int c, int d){
        for(int i = a; i < b; i += c){
            for(int j = 0; j < d; j++){
                if(i == j) System.out.print("* ");
                else System.out.print("_ ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int j = sc.nextInt();
        int[] m = new int[j];
        for(int i = 0; i < j; i++) m[i] = sc.nextInt();
        for(int i = 0; i < j; i++){
            if(i == 0)
                ab(0, m[i], 1, n);
            else if(m[i-1] < m[i])
                ab(m[i-1]+1, m[i]+1, 1, n);
            else if(m[i-1] > m[i])
                ab(m[i-1]-2, m[i]-2, -1, n);
        }
    }
}
