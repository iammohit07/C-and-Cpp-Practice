//Q.1 C program to read name and marks of n number of students and store them in a file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
        char name[50];
        int marks,i,n;
        printf("Enter number of students: ");
        scanf("%d",&n);
        FILE *fptr;
        fptr=(fopen("E:\CD LAB\\CD.txt","w"));
        if(fptr==NULL) {
                printf("\nError!");
                exit(1);
        }
        for (i=0;i<n;++i) {
                printf("\nFor Student: %d \nEnter name: ",i+1);
                scanf("%s",name);
                printf("Enter marks: ");
                scanf("%d",&marks);
        }
        fclose(fptr);
        return 0;
}

