#include<stdio.h>
#include<string.h>
int main()
{
int n=0,i,j;
char ds[100][30],tg[30];
while(i<100)
{
 printf("\n Vao xau ky tu thu %d:",i+1);
fflush(stdin); gets(ds[i]);
if (ds[i][0]=='\0') break;
i++;
}
n=i; for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		  if (strcmp(ds[i],ds[j])>0)	
		  {	
		  	strcpy(tg,ds[i]);
		  	strcpy(ds[i],ds[j]);
		  	strcpy(ds[j],tg);
		  }
printf("\n Day theo thu tu alphabe \n");
  for(i=0;i<n;i++) puts(ds[i]);
  return 0;
}

