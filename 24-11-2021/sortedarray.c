#include<stdio.h>
void main()
{
int a[10],b[10],c[10],i,j,k,m,n,temp=0;
printf(" the first array \n");
printf("enter the size=");
scanf("%d",&m);
printf("enter the elements=");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf(" the second array \n");
printf("enter the size=");
scanf("%d",&n);
printf("enter the elements=");
for(j=0;j<n;j++)
scanf("%d",&b[j]);
int x=0,y=0,z=0;
while((x<m)&&(y<n))
{
if(a[x]<=b[y])
{
c[z]=a[x];
x++;
}
else
{
c[z]=b[y];
y++;
}z++;
while(x<m)
{
c[z]=a[x];
x++;
z++;




}
while(y<n)
{
c[z]=b[y];
y++;
z++;
}
printf("merged array=");
for(x=0;x<z;x++)
printf("%d \n",c[x]);
}
for(x=0;x<z;x++)
{
for(k=0;k<z-x-1;k++)
{
if(c[k]>c[k+1])
{
temp =c[k];
c[k]=c[k+1];
c[k+1]=temp;
}
}
}
printf("sorted array=");
for(x=0;x<z;x++)
printf("%d \n ",c[x]);
}
