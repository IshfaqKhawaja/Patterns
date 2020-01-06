#include<iostream>
int main(){
	int n,m,sum=0,no_of_additions=0;
	printf("Enter the value of n:\n");
	scanf("%d",&n);

	printf("Enter the value of m :\n");
	scanf("%d",&m);
		int min=n,no=m;
	if(m<n){
	min=m;
	no=n;
	}
	for(int i =0;i<(int)(min/2);i++)
		{
			sum=sum+no;
			no_of_additions++;
		}
	//printf("\n %d",sum);
	sum+=sum;
	if(m%2!=0)
	sum+=n;
	printf("The Product is: %d\nTotal additions taken are %d",sum,no_of_additions);
	
	}
