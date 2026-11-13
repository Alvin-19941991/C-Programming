//reading from a file

#include <stdio.h>
#include <stdlib.h>

void readFromFile();

int main(){

	readFromFile();
	
	return 0;
} 
void readFromFile(){
	FILE *fp;
	int ch;
	fp=fopen("C:\\Users\\Lenovo\\Documents\\sample.txt","r");
	if(fp==NULL){
		printf("Error creating the file(path)\n");
		exit(1);
	}
	
	while((ch=getc(fp))!=EOF){
		putchar(ch);
	}
		printf("File successfully read\n");
			fclose(fp);
}