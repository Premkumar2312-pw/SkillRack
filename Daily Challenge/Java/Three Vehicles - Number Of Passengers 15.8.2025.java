import java.util.*;
class Main{
    static void comb(int[] a,int start,int r,List<Integer> cur,List<Integer> res){
        if(cur.size()==r){res.add(cur.stream().mapToInt(Integer::intValue).sum());return;}
        for(int i=start;i<a.length;i++){cur.add(a[i]); comb(a,i+1,r,cur,res); cur.remove(cur.size()-1);}
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        List<Integer> arr=new ArrayList<>();
        while(sc.hasNextInt()) arr.add(sc.nextInt());
        int[] a=arr.stream().mapToInt(i->i).toArray();
        List<Integer> res=new ArrayList<>();
        for(int r=1;r<=3;r++) comb(a,0,r,new ArrayList<>(),res);
        Collections.sort(res);
        for(int v:res) System.out.print(v+" ");
    }
}