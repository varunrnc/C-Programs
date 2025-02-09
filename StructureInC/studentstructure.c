#include <stdio.h>

struct student {
    int roll_no;
    char name[20];
    char course[20];
    int marks_obtained;
};

int main()
{
    struct student s1;
    printf("Enter the student roll number : ");
    scanf("%d", &s1.roll_no);
    printf("Enter the student name: ");
    scanf("%s", s1.name);
    printf("Enter the student course name: ");
    scanf("%s", s1.course);
    printf("Enter the student percentage: ");
    scanf("%d", &s1.marks_obtained);
    printf("\nData entry is completed");
    printf("\nThe data entered is as followings:\n");
    printf("\nThe student roll no is %d", s1.roll_no);
    printf("\nThe student name is %s", s1.name);
    printf("\nThe student course is %d", s1.course);
    printf("\nThe student percentage is %d", s1.marks_obtained);

    return 0;
}