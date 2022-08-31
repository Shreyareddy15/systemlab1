#include<stdio.h>

int main(){
    int given_number, primecount = 0;
    printf("Enter the number to find whether its prime number or not?");
    scanf("%d", &given_number);
    if(given_number > 1){
    	for(int i=0; i < given_number; i++){
        	if(given_number % (i+1) == 0){
           	 primecount++;
        	}
    	}
	if (primecount == 2){
           printf("The given number is PRIME NUMBER");
        }
	else{
            printf("The given number is NOT PRIME NUMBER");
         }
     }
     else{
          printf("Its a 'not Prime number' nor 'prime number'");
     }
return 0;
}

