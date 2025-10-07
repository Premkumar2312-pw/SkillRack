import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), c = 0, d = 0;
        int[] l = new int[n];
        String[] l1 = new String[n];
        for(int i=0;i<n;i++) l[i]=sc.nextInt();
        for(int i=0;i<n;i++) {
            if(i==0) {
                l1[i]="".repeat(l[i]).replace("", "*");
                c+=l[i];
            } else if(l[i]>0) {
                l1[i]=".".repeat(c)+"*".repeat(l[i]);
                c+=l[i];
            } else {
                c+=l[i];
                l1[i]=".".repeat(c-1)+"*".repeat(-l[i]);
            }
        }
        for(String s:l1) d=Math.max(d, s.length());
        for(int i=0;i<n;i++) l1[i]=l1[i]+ "-".repeat(d - l1[i].length());
        for(int i=d-1;i>=0;i--) {
            for(int j=0;j<n;j++) System.out.print(l1[j].charAt(i));
            System.out.println();
        }
    }
}