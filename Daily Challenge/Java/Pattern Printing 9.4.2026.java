import java.util.*;

public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        List<String> l=new ArrayList<>();

        for(int i=1;i<=n;i++){
            StringBuilder sb=new StringBuilder();
            for(int j=0;j<i;j++) sb.append(i);
            l.add(sb.toString());
        }

        for(String x:l) System.out.println(x);
        for(int i=l.size()-1;i>=0;i--) System.out.println(l.get(i));
    }
}