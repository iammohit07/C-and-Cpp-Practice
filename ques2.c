//Q.2 C program to read name and marks of n number of students from and store them in a file. If the file previously exits, add the information to the file.
#include <stdio.h>
int main() {
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("E:\CD LAB\\CD.txt","a"));
	if(fptr==NULL) {
		printf("Error!");
	}
	for (i=0;i<n;++i) {
		printf("For Student: %d \nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
	}
	fclose(fptr);
	return 0;
}

