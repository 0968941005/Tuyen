#include<stdio.h>
#include <conio.h>
/*
void printFile(char *fname);
int main(){
	printf("\n---Doc noi dung tep---\n");
	printFile("C:\\Users\\ADMIN\\Downloads\\QueHuong.txt");
	getch();
	
}

void printFile (char*fname){
	//open file for reading
	char ch;
	FILE *f=fopen(fname,"r");
	if(f==NULL){
		printf("Error openinf file");
		return;
	}
	
	while ((ch=fgetc(f)) != EOF){
		printf("%c",ch);
	}
	
	fclose(f);
}
*/
#define MAX 300
void printFileByLines(char *fname);
int main(){
	printf("\n---Doc noi dung tep---\n");
	printFileByLines("C:\\Users\\ADMIN\\Downloads\\LamAnh.txt");
	getch();
	
}

void printFileByLines(char *fname){
	FILE *pFile;
	char mystring [MAX];
	pFile = fopen (fname,"r");
	if (pFile == NULL){"Error opening file"; return;
	}
	
	while (!feof(pFile)){
		if (fgets (mystring, MAX, pFile) != NULL) printf("%s",mystring);
		
	}
	fclose (pFile);
}























