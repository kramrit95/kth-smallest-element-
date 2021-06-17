#include <stdio.h>

int main() {
int counter=1;
int a[100];
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
while(counter<n)
{
    for(int i=0;i<n-counter;i++)
    {
    if(a[i]>a[i+1])
    {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
        }
        counter++;
    
}

//for(int i=0;i<n;i++)
//{
   // printf("%d\n",a[i]);
    
//}
int k;
scanf("%d",&k);
printf("%d",a[k-1]);
return 0;
}
