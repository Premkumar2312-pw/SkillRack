void swapDigitsSameSum(int *ptr1, int *ptr2)
{
    int x=*ptr1,y=*ptr2;
    int big=x>y?x:y,small=x>y?y:x;
    int db=0,ds=0,t=big;
    while(t){
        db++;
        t/=10;
    }
    t=small;
    while(t){
        ds++;
        t/=10;
    }
    int D=db-ds, power=1;
    for(int i=0;i<ds;i++){
        power*=10;
    }
    int pref=big/power,rest=big%power;
    int newSmall=pref;
    t=small;
    while(t){
        newSmall*=10;
        t/=10;
    }
    newSmall+=small;
    int newBig=rest;
    if(x>y){
        *ptr1=newBig;
        *ptr2=newSmall;
    }
    else{
        *ptr1=newSmall;
        *ptr2=newBig;
    }
}