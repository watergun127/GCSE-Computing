#include <stdio.h> 
 
int findNextPrime(int nextPrime){
	nextPrime++;
	int divisor=nextPrime-1,divided=-1;
	while(1){
		divisor=nextPrime-1;
		divided=-1;
		while(divided%nextPrime!=0){
			if(divisor>1){
				divided=nextPrime/divisor;
			}else{
				return nextPrime;
			}
			divisor--;
		}
		nextPrime++;
	}
}			
int factorize(int x) {  
	int nextPrime=2,isntPrime=0;
 	while(x>1){
  		if(x%nextPrime==0){
  			x/=nextPrime;
  			printf("%d",nextPrime);
  			if(x>1){
  				printf(" * ");
  			}
  			isntPrime=1;
  			nextPrime=2;
  		}else{
  			nextPrime=findNextPrime(nextPrime);
  		}
 	}
 	return 0;
}  
 
int main(void) { 
    int number,i;
  while(1){
  	printf("Please give me a positive integer!\n");
  	scanf("%d",&number);
    if(number==0){
        for(i=0;i<50;i++){
            factorize(i+1);
            printf("\n");
        }
    }else{
        factorize(number);
        printf("\n");  
    }
  }
  return 0;  
} 
