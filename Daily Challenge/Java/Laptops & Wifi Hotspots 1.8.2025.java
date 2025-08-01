import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        List<Integer> res=new ArrayList<>();
        int stars=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='#'){
                for(int j=i-1;j>=0 && s.charAt(j)!='#';j--)
                    if(s.charAt(j)=='L') res.add(stars);
                stars=0;
            } else if(s.charAt(i)=='*') stars++;
        }
        for(int j=s.length()-1;j>=0 && s.charAt(j)!='#';j--)
            if(s.charAt(j)=='L') res.add(stars);
        for(int x:res) System.out.print(x+" ");
    }
}