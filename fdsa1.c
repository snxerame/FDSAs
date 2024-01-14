#include<stdio.h>
int main(){	
	int n;scanf("%d",&n);
	int i=2;
	//Checking each number, prime/not
	for(i=2;i<9999999;i++){
	if(n!=0){
		int count =0;
		//finding no. of factors
		for(int j=2;j<i;j++)
			if((i%j)==0)count++;
		//if no factor then it is prime
		if(count==0)n--;
		//printing the nth prime number
		if(n==0 && count==0)
	{printf("%d",i);return 0;}}}}
