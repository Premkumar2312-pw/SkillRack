char* getCommaSeparatedValues(int SIZE, int arr[])
{
  static char res[500];
  int pos=0;
  for(int i=0;i<SIZE;i++){
      pos += sprintf(res + pos,"%d%s",arr[i],(i<SIZE-1)? ",":"");
  }
  return res;
}
