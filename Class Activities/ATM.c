// program of money withdrawals

#include <stdio.h>
int main()
{float balance = 50000;
float withdrawal;

while(balance > 0){
	printf("Enter withdrawal amount:");
	scanf("%f", &withdrawal);
	
	if(withdrawal==0){
		prinf("Exit program.\n");
	 break;
	
	}
	if(withdrawal>balance){
		printf("insufficient balance!\n");
		break; 
	}
	balance= balance-withdrawal;
	printf("withdrawal succesful.\n");
	printf("Remaining balance:Ksh %.2f", balance);
	
	}
	printf("Thank you for using ATM.\n");
	
	return 0;
	
	}
	
	

	
		
	


	return 0;
}