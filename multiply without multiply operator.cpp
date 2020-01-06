#include<iostream>
int main(){
	int n,m,sum=0;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	
	printf("Enter the value of m :\n");
	scanf("%d",&m);
	
	for(int i =0;i<(int)(m/2);i++)
		{
			sum=sum+n;
		}
	//printf("\n %d",sum);
	sum+=sum;
	if(m%2!=0)
	sum+=n;
	printf("The Product is: %d",sum);
		
		
	
	
	
	
	
	
	
	
}
