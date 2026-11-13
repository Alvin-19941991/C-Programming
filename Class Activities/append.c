//append mode

#include <stdio.h>
#include <stdlib.h>

void appendToFile();

int main(){

	appendToFile();
	
	return 0;
}

 void appendToFile(){
	FILE *fp;
	char sentence[300];
	fp=fopen("C:\\Users\\Lenovo\\Documents\\sample.txt","a");
	
	if (fp==NULL){
printf("Error opening the file (path)\n");
exit(1);
	}
	
	printf("Enter paragraph to append\n");
	fgets(sentence,sizeof(sentence),stdin);
	fputs(sentence,fp);
	printf("paragraph successfully appended to file.\n");
	fclose(fp);
 }