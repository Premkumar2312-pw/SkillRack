import java.util.Scanner;
public class BlockMask {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt(), C = sc.nextInt();
        String[][] mat = new String[R][C];
        for(int i=0;i<R;i++)
            for(int j=0;j<C;j++)
                mat[i][j]=sc.next();
        for(int i=0;i<R;i+=3){
            for(int j=0;j<C;j+=3) {
                if(i+3<=R && j+3<=C){
                    for(int k=i+1;k<i+4;k++)
                        for(int l=j+1;l<j+4;l++)
                            if(((k%3)==1 && ((l%3)==1||(l%3)==0)) || ((k%3)==0 && ((l%3)==1||(l%3)==0)) || ((k%3)==2 && (l%3)==2)){
                                int len = mat[k-1][l-1].length();
                                StringBuilder s = new StringBuilder();
                                for(int x=0; x<len; x++) s.append("*");
                                mat[k-1][l-1] = s.toString();
                            }
                }
            }
        }
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++)
                System.out.print(mat[i][j]+" ");
            System.out.println();
        }
        sc.close();
    }
}