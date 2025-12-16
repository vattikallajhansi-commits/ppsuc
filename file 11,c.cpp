#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("file.txt","w");
	fprintf(fp,"HI WELCOME TO ADITYA UNIVERSITY STUDENTS");
	fclose(fp);

}
