#include <stdio.h>
#include <stdlib.h>
int Search(int arr[],int size,int number);

int main(int argc,const char *argv[])
{
int arr[argc-1];
int x=0;
printf("Last Entered Element's ");
for(int i=1;i<argc;i++)
{
arr[x]=atoi(argv[i]);
x++;
}
int num=arr[x-1];
int pos=Search(arr,argc-2,num);
printf("Position is %d ",pos);
/*
for(int i=0;i<argc-1;i++)
{
printf("%d ",arr[i]);
}*/
}
int Search(int arr[],int size,int number)
{
int position=0,flag=0;
for(int i=0;i<size;i++)
{
if(number==arr[i])
{
flag=1;
position=i;
break;
}
}
if(flag==1)
return position;
}
