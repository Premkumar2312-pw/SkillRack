import java.util.*;
public class Main {
    public static void main(String[] args) {
        String[][] c = {
            {"*", "11", "12", "1", "*"},
            {"10", "*", "*", "*", "2"},
            {"9", "*", "*", "*", "3"},
            {"8", "*", "*", "*", "4"},
            {"*", "7", "6", "5", "*"}
        };

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] a = new String[n], b = new String[n];
        for(int i=0;i<n;i++) {
            a[i]=sc.next();
            b[i]=sc.next();
        }

        for(int k=0;k<n;k++) {
            for(int i=0;i<5;i++) {
                for(int j=0;j<5;j++) {
                    if(c[i][j].equals(a[k])) c[i][j]=b[k];
                    else if(c[i][j].equals(b[k])) c[i][j]=a[k];
                }
            }
        }

        for(int i=0;i<5;i++) {
            for(int j=0;j<5;j++) System.out.print(c[i][j]+" ");
            System.out.println();
        }
    }
}