#include <stdio.h>
void stcpy(char st2[],char st1[]){
    int i=0;
    while(st1[i]!='\0'){
        i++;
    }int len=i;
    int j;
    while(j< len){
        st2[j]=st1[j];
        j++;
    }
    st2[j]='\0';
}
int main(){
    char str1[]="assignmet krna hai";
    char str2[100];
    stcpy(str2,str1);
    printf("%s\n",str2);
    return 0;
}