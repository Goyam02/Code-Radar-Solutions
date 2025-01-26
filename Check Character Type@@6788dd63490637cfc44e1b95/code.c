#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=="aeiou"|| ch=="AEIOU"){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    
    return 0;
}