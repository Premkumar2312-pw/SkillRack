import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int r=s.nextInt(),c=s.nextInt();
        int[][] a=new int[r][c];
        ArrayList<Integer> o=new ArrayList<>();
        for(int i=0;i<r;i++)for(int j=0;j<c;j++){
            a[i][j]=s.nextInt();
            if(a[i][j]%2!=0) o.add(a[i][j]);
        }
        Collections.sort(o);
        int k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(a[i][j]%2!=0) System.out.print(o.get(k++)+" ");
                else System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
    }
}