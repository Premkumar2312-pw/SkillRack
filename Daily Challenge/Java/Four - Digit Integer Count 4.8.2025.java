import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = s.length();
        Set<String> u = new HashSet<>();
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                for(int k=j+1;k<n;k++)
                    for(int l=k+1;l<n;l++)
                        if(s.charAt(i)==s.charAt(j) && s.charAt(k)==s.charAt(l) &&
                           s.charAt(k)-'0'==s.charAt(i)-'0'+1)
                            u.add(""+s.charAt(i)+s.charAt(j)+s.charAt(k)+s.charAt(l));
        System.out.print(u.size());
    }
}