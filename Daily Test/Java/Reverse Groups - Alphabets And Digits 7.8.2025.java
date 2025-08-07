import java.util.*;
class M{
 public static void main(String[]a){
  Scanner sc=new Scanner(System.in);
  String s=sc.nextLine(),r="";
  for(int i=0;i<s.length();){
   int j=i;
   while(j<s.length()&&Character.isLetter(s.charAt(j))==Character.isLetter(s.charAt(i)))j++;
   for(int k=j-1;k>=i;k--)r+=s.charAt(k);
   i=j;
  }
  System.out.print(r);
 }
}