#include<iostream>

int main(){
	int n,j,count=0,m;
	printf("Enter the number whose patter is required: \n");
	scanf("%d",&n);
	
	m= n+(n-1);
	// Print First Half
	for(int i=n;i>=1;i--){
		
			for(j=0;j<count;j++)
			{
				printf("%d\t",n-j);
			}
			for(j=0;j<m-2*count;j++)
			{
				printf("%d\t",i);
			}
			for(j=count;j>0;j--)
			{
				printf("%d\t",n-j+1);
			}
			count++;
			printf("\n");
	}
	// Print Second Half
	//printf("%d",count);
	count--;
	for(int i=2;i<=n;i++){
		
			for(j=0;j<count;j++)
			{
				printf("%d\t",n-j);
			}
			for(j=0;j<m-2*count;j++)
			{
				printf("%d\t",i);
			}
			for(j=count;j>0;j--)
			{
				printf("%d\t",n-j+1);
			}
			count--;
			printf("\n");





}
	
	}
	
	
	

