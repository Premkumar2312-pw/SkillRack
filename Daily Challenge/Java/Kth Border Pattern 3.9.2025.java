import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), K = sc.nextInt();
        char[][] mat = new char[N][N];
        
        for(int i=0;i<N;i++)
            Arrays.fill(mat[i], '*');
        
        for(int i=0;i<N;i++){
            if(i == K-1 || i == N-K){
                for(int j=K-1;j<=N-K;j++) mat[i][j] = '#';
            } else if(i >= K-1 && i <= N-K){
                mat[i][K-1] = '#';
                mat[i][N-K] = '#';
            }
            for(int j=0;j<N;j++) System.out.print(mat[i][j]+" ");
            System.out.println();
        }
    }
}