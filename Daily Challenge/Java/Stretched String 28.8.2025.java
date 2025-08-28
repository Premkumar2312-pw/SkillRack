import java.util.*;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine().trim();
        String s2 = sc.nextLine().trim();
        int i=0,j=0,n=s1.length(),m=s2.length(),k=-1;
        boolean v=true;
        while(i<n && j<m){
            if(s1.charAt(i)!=s2.charAt(j)){v=false;break;}
            int c2=0; while(j<m && s2.charAt(j)==s1.charAt(i)){c2++;j++;}
            int c1=1; while(i+1<n && s1.charAt(i+1)==s1.charAt(i)){c1++;i++;}
            if(c2%c1!=0){v=false;break;}
            int f=c2/c1;
            if(k==-1)k=f; else if(k!=f){v=false;break;}
            i++;
        }
        System.out.println(v && i==n && j==m ? "Yes" : "No");
    }
}