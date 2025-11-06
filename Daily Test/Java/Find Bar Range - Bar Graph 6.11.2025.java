import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] l = new String[n];
        for(int i=0; i<n; i++) {
            l[i] = sc.next();
        }
        // Reverse the array
        for(int i=0; i<n/2; i++) {
            String temp = l[i];
            l[i] = l[n-1-i];
            l[n-1-i] = temp;
        }
        int cols = l[0].length();
        for(int i=0; i<cols; i++) {
            int b=0, c=0, f=0;
            for(int j=0; j<n; j++) {
                if(l[j].charAt(i)=='#' && f==0) {
                    b=j; f=1; c=j;
                } else if(f==1 && l[j].charAt(i)=='#') {
                    c=j;
                }
            }
            System.out.println((b+1) + " " + (c+1));
        }
    }
}