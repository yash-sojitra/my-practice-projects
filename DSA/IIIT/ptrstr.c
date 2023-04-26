#include <stdio.h>
struct student{
    char name[20];
    int marks;
};
int main(){
    struct student student1, *ptr;
    ptr = &student1;
    printf("entrer name of first student: \n");
    scanf("%s",&student1.name);
    printf("entrer marks of first student: \n");
    scanf("%d",&student1.marks);
    printf("\nname of student 1 is -> %s\n",ptr->name);
    printf("marks of student 1 is -> %d",ptr->marks);
    return 0;
}