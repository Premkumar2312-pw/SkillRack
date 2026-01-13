import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++) a[i]=sc.nextInt();

        int days=0;
        while(true){
            ArrayList<Integer> next=new ArrayList<>();
            next.add(a[0]);
            boolean removed=false;

            for(int i=1;i<n;i++){
                if(a[i]>a[i-1]) removed=true;
                else next.add(a[i]);
            }

            if(!removed) break;
            days++;
            n=next.size();
            a=new int[n];
            for(int i=0;i<n;i++) a[i]=next.get(i);
        }
        System.out.println(days);
    }
}