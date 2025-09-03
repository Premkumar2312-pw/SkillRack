import java.util.*;
class Main {
    static String toBinary(int x){
        return Integer.toBinaryString(x);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        for(int i=0;i<N;i++) arr[i]=sc.nextInt();
        
        String[] bin = new String[N];
        for(int i=0;i<N;i++) bin[i] = toBinary(arr[i]);
        
        String extra = bin[N-1].charAt(bin[N-1].length()-1) + bin[0].substring(0, bin[0].length()-1);
        System.out.print(Integer.parseInt(extra,2) + " ");
        
        for(int i=1;i<N;i++){
            String tmp = bin[i-1].charAt(bin[i-1].length()-1) + bin[i].substring(0, bin[i].length()-1);
            System.out.print(Integer.parseInt(tmp,2) + " ");
        }
    }
}