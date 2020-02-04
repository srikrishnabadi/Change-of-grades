#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    int val=0;
    *result_count=grades_count;
    int *a=(int *)malloc(grades_count*sizeof(int));
    for(int i=0;i<grades_count;i++)
    {
        if(*(grades+i)<=37)
        {
            *(a+i)=*(grades+i);
        }
        else{
        val=(5-(*(grades+i))%5);
        if((val)<3)
        {
            *(a+i)= *(grades+i) + val;
        }
        else{
            *(a+i)=*(grades+i);
        }
        }
    }
return a;
}
int main()
{
    int grade_count;
    printf("Enter the number of marks that has to be entered : ");
    scanf("%d",&grade_count);
    int *grades = (int *)malloc(grade_count*sizeof(int));
    printf("Enter the marks : ");
    for(int i=0;i<grade_count;i++)
        scanf("%d",(grades+i));
    int result_count=0;
    int *result=gradingStudents(grade_count,grades,&result_count);
    printf("The changed marks is : ");
    for(int i=0;i<grade_count;i++)
        printf("%d\t",*(result + i));
    return 0;
}
