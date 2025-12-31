import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt(), c=sc.nextInt();
        int[][] m=new int[r][c];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                m[i][j]=sc.nextInt();

        ArrayList<Integer> l=new ArrayList<>();

        for(int i=0;i<r;i+=3){
            for(int j=0;j<c;j+=3){
                String a="",b="",d="";
                for(int y=0;y<3;y++){
                    String row="";
                    for(int n=0;n<3;n++){
                        row+=m[i+y][j+n];
                        if(n==0) a+=m[i+y][j+n];
                        if(n==1) b+=m[i+y][j+n];
                        if(n==2) d+=m[i+y][j+n];
                    }
                    l.add(Integer.parseInt(row));
                }
                l.add(Integer.parseInt(a));
                l.add(Integer.parseInt(b));
                l.add(Integer.parseInt(d));
                l.add(m[i][j]+m[i+1][j+1]+m[i+2][j+2]);
                l.add(m[i][j+2]+m[i+1][j+1]+m[i+2][j]);
            }
        }
        Collections.sort(l);
        for(int x:l) System.out.print(x+" ");
    }
}