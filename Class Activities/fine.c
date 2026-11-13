/* program to calculate a fine charges of overdue days
days<=7,20 Ksh
days between 8 and 14, 50Ksh 
days 15 or more, 100Ksh
*/

#include <stdio.h>
int main() {
	int Book_ID,due_date,return_date,days_of_overdue;//%d
	float fine_rate,fine_amount; //%f
	printf("Enter the Book_ID\n:");
	scanf("%d", &Book_ID);
	printf("Enter due_date:\n");
	scanf("%d", &due_date);
	printf("Enter return date:\n");
	scanf("d%", &return_date);
	days_of_overdue= return_date - due_date;

  if (days_of_overdue <= 7) {
	fine_rate= 20;
	fine_amount= days_of_overdue * fine_rate;
}
  else if ( days_of_overdue<=14) {
	fine_rate = 50;
	fine_amount= days_of_overdue * fine_rate;
}
  else {
	fine_rate= 100;
	fine_amount = days_of_overdue * fine_rate;
}	
	printf("Book ID: %d\n", Book_ID);
	printf("date of return: %d\n",return_date);
	printf("days of overdue :%d\n", days_of_overdue );
	printf("fine rate:Ksh %f\n", fine_rate);
	printf("fine rate:Ksh %f\n",fine_rate );
	
	return 0;
	
	
	
	
	
	
	
}