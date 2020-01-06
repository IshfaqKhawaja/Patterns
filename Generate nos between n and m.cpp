#include<iostream>
#include<math.h>

int main(){
	int n,m,array[500],counter=1,count=0,index,k;
	printf("Enter the value of n and m:\n");
	scanf("%d%d",&n,&m);
	array[1]=n;
	array[2]=m;
	index=1;
	k=3;
	while(count<5){
		counter++;
		int stop = pow(2,counter-1);
		int j=0;
		for(int i=index;i<stop+index;i++)
		{
			array[k]=array[i]*10+n;
			k++;
			array[k]=array[i]*10+m;
			k++;
			j++;
		}
		
		count++;
		index+=j;
	}
	for(int i=1;i<100;i++)
	printf("%d\n",array[i]);
	}
