#include<stdio.h>
void quick(int no[50],int f, int l)
{
	int i,j,p,temp;
	if(f<l)
	{
		p=f;
		i=f;
		j=l;
		while(i<j)
		{
			while(no[i]<=no[p])
			i++;
			while(no[j]>no[p])
			j--;
			if(i<j)
			{
				temp=no[i];
				no[i]=no[j];
				no[j]=temp;
			}
		}
		temp=no[p];
		no[p]=no[j];
		no[j]=temp;
		quick(no,f,j-1);
		quick(no,j+1,l);
}
}
void main()
{
	int sum=0,i,count=0,num[25],odd[20],j=0;
	printf("Enter the no of elements:");
	scanf("%d",&count);
	printf("Enter the elements\n");
	for(i=0;i<count;i++)
	{
		scanf("%d",&num[i]);
	}
	quick(num,0,count-1);
	printf("After applying quick sort\n");
	for(i=0;i<count;i++)
	printf("%d\t",num[i]);
	for(i=0;i<count;i++)
	{
		if(num[i]%2!=0)
		{	
			odd[j]=num[i];
			sum=sum+odd[j];
			j++;
		}
		
	}
};
