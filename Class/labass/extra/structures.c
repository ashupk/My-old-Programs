#include<stdio.h>
int main()
{
    struct student
    {
        char* name;
        int roll;
        int quiz_marks;
    };
    int i,n;
    printf("Enter the no. of students ");
    scanf("%d",&n);
    printf("\n");
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Give details of Student %d",i+1);
        printf("\n");
        printf("Name : ");
        scanf("%s",s[i].name);
        //gets(s[i].name);
        printf("\n");
        printf("Roll No.: ");
        scanf("%d",s[i].roll);
        printf("\n");
        printf("Quiz Marks: ");
        scanf("%d",s[i].quiz_marks);
    }
    return 0;

}
