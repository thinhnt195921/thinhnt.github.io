	#include<stdio.h>
	#include<string.h>
void selectionSort (int a[], int n)
{
	int i,j,m;
	for (i=0;i<n;i++)
	{
		m=i;
		for (j=i+1;j<n;j++)
	    	if (a[j]>a[m]) 
	    	   m=j;
	    int temp=a[i];
	    a[i]=a[m];
	    a[m]=temp;
	}
}
int main()
{
    int a[200];
    int i=0;
    while ( a[i-1]!=-1 && i<200)
    {
    	printf("\n Vao so nguyen dung thu %d ",i+1);
    	scanf("%d",&a[i]);
    	i++;
    }
    int n=i-1;
    selectionSort(a,n);
    printf("Day theo thu tu giam dan ");
    for (i=0; i<n;i++) printf("\n%d",a[i]);
    return 0;
}
