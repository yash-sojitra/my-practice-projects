#include <stdio.h>
void convert_to_words(int num){
    char* ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char* tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char* teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char* suffix[] = {"", "thousand", "million", "billion", "trillion", "quadrillion", "quintillion"};
    int i = 0, j = 0;
    int chunks[7] = {0};
    if (num == 0) {
        printf("zero");
        return;
    }
    
    while (num > 0) {
        chunks[i++] = num % 1000;
        num /= 1000;
    }
    
    for (j = i - 1; j >= 0; j--) {
        int chunk = chunks[j];
        int hundreds = chunk / 100;
        int tens_digit = chunk % 100 / 10;
        int ones_digit = chunk % 10;
        
        if (hundreds > 0) 
            printf("%s hundred ", ones[hundreds]);
        
        if (tens_digit == 1) 
            printf("%s ", teens[ones_digit]);
        else{
            if (tens_digit > 1)
                printf("%s ", tens[tens_digit]);
            
            if (ones_digit > 0)
                printf("%s ", ones[ones_digit]);
        }
        
        if (chunk > 0) 
            printf("%s ", suffix[j]);
    }
}

void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number in words: ");
    convert_to_words(num);
}