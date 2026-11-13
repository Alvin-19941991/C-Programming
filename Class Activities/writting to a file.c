//writing to a file

#include <stdio.h>
#include <stdlib.h>
void writeTofile();
int main(){
writeTofile();

	return 0;
}

void writeTofile(){
	FILE *fp;
	char sentence[300];
	fp=fopen("C:\\Users\\Lenovo\\Documents\\sample.txt","w");
if(fp==NULL){
	printf("Error creating the file(path)\n");
	exit(1);
	}
	

printf("Enter a paragraph \n");
fgets(sentence,sizeof(sentence),stdin);
//scanf(),scanf("%s^[\n]",&sentense);
fputs(sentence,fp);

	//printf(fp,"This is%s",sentense);
	printf("paragraph successfully written to file.\n");
	fclose(fp);
	}
