import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<String> s = new ArrayList<>();
        while(sc.hasNext()) s.add(sc.next());
        List<Integer> o = new ArrayList<>();
        int f = 0;
        for(String x:s){
            if(x.contains("[") && !x.contains("]")) f=1;
            if(f==0 && x.charAt(0)!='[') o.add(Integer.parseInt(x));
            if(x.contains("]") && !x.contains("[")) f=0;
        }
        Collections.sort(o);
        f=0; int i=0;
        for(String x:s){
            if(x.contains("[") && !x.contains("]")){ f=1; System.out.print(x+" "); }
            else if(x.contains("]") && !x.contains("[")){ f=0; System.out.print(x+" "); }
            else if(f==0 && x.charAt(0)!='[') System.out.print(o.get(i++)+" ");
            else System.out.print(x+" ");
        }
    }
}