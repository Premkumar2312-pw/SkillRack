import java.util.*;
public class Hello {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String[] input=sc.nextLine().trim().split(" ");
        int res=Integer.parseInt(input[0]);

        for(int i=1;i<input.length;i+=2){
            String op=input[i];
            int val=Integer.parseInt(input[i+1]);
            switch(op){
                case "plus": res+=val; break;
                case "minus": res-=val; break;
                case "multiply": res*=val; break;
                case "divide": res/=val; break;
            }
        }
        System.out.println(res);
    }
}