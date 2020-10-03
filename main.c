#include <stdio.h>
#include <stdlib.h>

//void *malloc(int size)
int main()
{
  int no=10;
   int *name=&name;
    name=(int *)malloc(no*sizeof(int)); //100 bytes
for(int i=0;i<no;i++)
{
    *(name+i)=i;
//scanf("%d",name+i);
printf("%d\n",*(name+i));
}
free (name);
//int*data =(int *)malloc(no*sizeof(int));
//free(data);
    return 0;
}
