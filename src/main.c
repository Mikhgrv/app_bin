#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Michailo\Desktop\projects\app_bin\includes\convert.h"
#include "C:\Users\Michailo\Desktop\projects\app_bin\includes\bit_operations.h"

void menu();

void answer_check(int answer){

    if(answer == 1)
    {
        convert_decimal_bin();
    }
    if(answer == 2)
    {
        convert_bin_to_decimal();
    }
    if(answer == 3)
    {
        bit_operations();
    }
    if(answer == 4)
    {
        exit(0);
    }
    if(answer != 1 && answer != 2 && answer != 3) {
        printf("\nYou put inpropriate number or symbol\n");
        menu();
    }
}

void menu()
{
   
    printf("%s","\nType the number of action:\n\
    1 -- convert_decimal_bin\n\
    2 -- convert_bin_to_decimal\n\
    3 -- bit_operations\n\
    4 -- escape from program\n");

    int answer;

    scanf("%d", &answer);
    
    answer_check(answer);
    
}

int main() 
{
    // printf() displays the string inside quotation

    menu();

    return 0;
}

