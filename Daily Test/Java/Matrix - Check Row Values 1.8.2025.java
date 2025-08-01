import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt(),c=sc.nextInt(),n=r*c;
        int[][] a=new int[r][c]; boolean[] seen=new boolean[n+1];
        for(int i=0;i<r;i++) for(int j=0;j<c;j++){
            a[i][j]=sc.nextInt();
            if(a[i][j]>=1 && a[i][j]<=n) seen[a[i][j]]=true;
        }
        for(int i=1;i<=n;i++) if(!seen[i]){System.out.print("No");return;}
        for(int i=0;i<r;i++){
            int l=i*c+1,h=(i+1)*c; boolean ok=false;
            for(int j=0;j<c;j++) if(a[i][j]>=l && a[i][j]<=h){ok=true;break;}
            if(!ok){System.out.print("No");return;}
        }
        System.out.print("Yes");
    }
}