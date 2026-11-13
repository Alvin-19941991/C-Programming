//A program to display househoids number and units consumed

#include <stdio.h>

int main(){
        int i;//%d
        float units[10];
	
     	for(i=0; i<10; i++) {
		printf("Enter units for household %d:", i+1);  
		scanf("%f",&units);
		printf("household %d consumed %.2f units\n", i+1,units);
		 }
		
		

	
	return 0;
	}