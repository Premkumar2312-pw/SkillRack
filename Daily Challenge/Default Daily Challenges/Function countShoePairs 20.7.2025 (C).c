int countShoePairs(int N, int *arr)
{
   int c[10000] = {0};
   for(int i = 0; i < N; i++) {
       c[arr[i]]++;
   }
   int p = 0;
   for(int i = 0; i < 10000; i++) {
       p += c[i] / 2;
   }
   return p;
}