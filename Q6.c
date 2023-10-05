//WAP to check weaather a student is pass or fail
# include<stdio.h>
int main() {
    int marks;
    printf("Enter marks of student");
    scanf("%d", &marks);
    if (marks>=30 && marks<=100)
    {
        printf("student is pass");
    } else if (marks<30)
    {
        printf("Student is fail");
    }
    else
    {printf("Enter valid marks");
    }
    return 0;
    
}