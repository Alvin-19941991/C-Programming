//A program for student marks

#include <stdio.h>
int main(){
	int mark;
	char grade;
	char choice;
	
	do
	{
		do
		{
			printf("Enter student's mark (0-100");
			scanf("%d", &mark)
			if(mark<0||mark>100){
				print("Error:Invalid mark! please enter a mark between 0 and 100.\n");
			}
		} while(<0||mark>100);
		if(mark>=80){
			grade='A';
		}
		else if(mark>=70){
			grade='B'
		}
		 else if(mark>=60){
			grade='C'
		 }
            else if(mark>=70){
			grade='D'
		}
		else {
			grade='F'
		}
		printf("mark:%d\n",mark);
		printf("grade: %c\n",grade);
		printf("Enter another student's mark?(y/n):");
		scanf("%c", &choice);
	}
	while(choice=='Y' ||choice=='Y');main
		printf("Progam ennded.\n");
	return 0;
}
	