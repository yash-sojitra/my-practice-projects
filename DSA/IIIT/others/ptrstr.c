#include <stdio.h>
struct student{
    char name[20];
    int rollNo;
    char department[20];
    int marks;
};
int main(){
    struct student student1, *ptr;
    ptr = &student1;
    printf("entrer name of first student: \n");
    scanf("%s",&student1.name);
    printf("entrer roll number of first student: \n");
    scanf("%d",&student1.rollNo);
    printf("entrer department of first student: \n");
    scanf("%s",&student1.department);
    printf("entrer marks of first student: \n");
    scanf("%d",&student1.marks);
    printf("\nname of student 1 is -> %s\n",ptr->name);
    printf("rollNo of student 1 is -> %d",ptr->rollNo);
    printf("\ndepartment of student 1 is -> %s\n",ptr->department);
    printf("marks of student 1 is -> %d",ptr->marks);
    return 0;
}