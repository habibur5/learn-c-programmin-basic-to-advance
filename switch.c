#include <stdio.h>

int main(){

    int digit;
    char CH;
    /* printf("Enter a digit: ");
    scanf("%d",&digit);

    switch (digit){
                    case 0: 
                            printf("Zero\n");
                            break;

                    case 1: 
                            printf("One\n");
                            break;

                    case 2: 
                            printf("two\n");
                            break;
                    case 3:
                            printf("Three\n");
                            break;
                    default : printf("Not a valid digit\n");
                    break;
                }
     */
    printf("Enter a character: ");
    scanf("%c", &CH);

    switch (CH) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'O':
        case 'I':
        case 'U':
            printf("Vowel\n");
            break;
        default :
            printf("Consonant\n");
    }
    
    return 0;

}


