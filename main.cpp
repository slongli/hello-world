#include <iostream>
#include<stdio.h>
using namespace std;

void Reverse(int R[],int from,int to)
{
    int i,temp;
    for(i=0;i<(to-from+1)/2;i++)
    {temp=R[from+i];R[from+i]=R[to-i];R[to-i]=temp;}

}


void Converse(int R[],int n,int p)
{
    Reverse(R,0,p-1);
    Reverse(R,p,n-1);
    Reverse(R,0,n-1);
}
int main()
{
    int i;
    int a[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    for(i=0;i<15;i++)
    printf("%d",a[i]);
    printf("\n");
    Converse(a,15,7);

    for(i=0;i<15;i++)
    printf("%d",a[i]);
    return 0;
}
