#include <stdio.h>  
int main(void) { 
    float pToE=1.19f,pToD=1.63f,eToD=1.37f,eToP=0.84f,dToP=0.61f,dToE=0.73f,exchangeRate,amount;
    int cFrom,cTo,changeRate;
    while(1){
        printf("How much money do you want to convert?\nMoney:");
        scanf("%f",&amount);
        printf("1 for dollars, 2 for pounds, 3 for euros.\nConvert from:");
        scanf("%d",&cFrom);
        printf("1 for dollars, 2 for pounds, 3 for euros.\nConvert to:");
        scanf("%d",&cTo);
        if(cFrom==1){
            if(cTo==2){
                exchangeRate=dToP;
            }else{
                exchangeRate=dToE;
            }
        }else if(cFrom==2){
            if(cTo==1){
                exchangeRate=pToD;
            }else{
                exchangeRate=pToE;
            }
        }else{
            if(cTo=2){
                exchangeRate=eToP;
            }else{
                exchangeRate=eToD;
            }
        }
        printf("The current exchange rate for that is %f. Would you like to change that?(1/0)",exchangeRate);
        scanf("%d",&changeRate);
        if(changeRate){
            printf("Okay! What do you want it to be?");
            scanf("%f",&exchangeRate);
        }
        printf("That's %f!\n",exchangeRate*amount); 
    }
  return 0;  
} 
