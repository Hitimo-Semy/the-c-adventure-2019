/* Q5. Write a program to input the roll no., marks in 3 subjects and marks in one additional subject for N number of students.
Compute the total marks, excess additional marks should be added to the total marks and determine the division. 
No division should be given if fail in 1 or more subjects.
1. Take the input for the number of students in the class;
2. make a 2d array to enter the marks 
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, r[90], a[90][4],mark=0;
    float avg;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    printf("Enter the data:\n");
    for(int i=0;i<n;i++)
    {
        printf("Roll No:");
        scanf("%d",&r[i]);
        printf("Enter marks for 3 subjects and additonal subject:\n");
        for(int j=0;j<4;j++)
        {
            printf("Subject %d:",j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int k=0;k<n;k++)
    {
        printf("\nRoll no: %d",r[k]);
        for(int l=0;l<5;l++)
        {
            mark=mark+a[k][l];  
        }
        avg=(float)mark/4;
        mark=0;
        if(a[k][0]<40.0 || a[k][1]<40.0 || a[k][2]<40.0 || a[k][3]<40.0)
        {
            printf("\nfail\n");
        }
        else if(avg>=60.0)
        {
            printf("\n1st division\n");
        }
        else if(avg>=50.0 && avg<=59.0)
        {
            printf("\n2nd division\n");
        }
        else if(avg>=40.0 && avg<=49.0)
        {
            printf("\n3rd division\n");
        }   
    }
    getch();
    return 0;
}
