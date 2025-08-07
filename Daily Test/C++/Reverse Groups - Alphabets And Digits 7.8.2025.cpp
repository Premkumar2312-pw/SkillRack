#include<iostream>
#include<cctype>
using namespace std;
int main(){
 string s,r;getline(cin,s);
 for(int i=0;i<s.size();){
  int j=i;
  while(j<s.size()&&isalpha(s[j])==isalpha(s[i]))j++;
  for(int k=j-1;k>=i;k--)r+=s[k];
  i=j;
 }
 cout<<r;
}