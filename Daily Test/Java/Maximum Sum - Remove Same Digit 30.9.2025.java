import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String[] arr = new String[N];
        for(int i=0;i<N;i++) arr[i]=sc.next();

        int originalSum=0;
        for(String s: arr) originalSum+=Integer.parseInt(s);

        int ans=Integer.MIN_VALUE;
        for(int d=0; d<10; d++){
            int s=0;
            for(String str: arr){
                String tmp=str.replaceAll(""+d,"");
                if(tmp.equals("")) tmp="0";
                s+=Integer.parseInt(tmp);
            }
            if(s!=originalSum) ans=Math.max(ans,s);
        }
        System.out.println(ans);
    }
}
