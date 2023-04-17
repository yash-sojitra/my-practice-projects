#include <stdio.h>
struct student{
    char name[20];
    int age;
};
int main(){
    struct student student1, *ptr;
    ptr = &student1;
    printf("entrer name of first student: \n");
    scanf("%s",&student1.name);
    printf("entrer age of first student: \n");
    scanf("%d",&student1.age);
    printf("\nname of student 1 is -> %s\n",ptr->name);
    printf("age of student 1 is -> %d",ptr->age);
    return 0;
}