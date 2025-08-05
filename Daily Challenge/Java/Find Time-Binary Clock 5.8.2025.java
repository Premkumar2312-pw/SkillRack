import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int[][] m=new int[4][6];
        int[] d=new int[6];
        for(int i=0;i<4;i++)
            for(int j=0;j<3;j++){
                String s=sc.next();
                m[i][j*2]=s.charAt(0)-'0';
                m[i][j*2+1]=s.charAt(1)-'0';
            }
        for(int j=0;j<6;j++)
            for(int i=0;i<4;i++) d[j]+=m[3-i][j]<<i;
        for(int i=0;i<6;i+=2){
            if(i>0) System.out.print(":");
            System.out.print(d[i]+""+d[i+1]);
        }
    }
}