#include <stdio.h>
#include <math.h>

void menu();



void convert_decimal_bin ()
{
        

    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("decimal: %d\n" ,num);


    int aditional;
    int bin[32];

    for (int i = 0; i < 32; i++)
        {
            bin[i] = 3;
            //printf("%d", bin[i]);
        }

    for (int i = 0; num > 0; i++)
        {
            aditional = num % 2;
            bin[i] = aditional;
            //printf("%d", aditional);
            num = num / 2;
        }
    
    printf("binary: ");
    
    for (int i = 31; i > -1; i--)
        { 
            if(bin[i] != 3){
               printf("%d", bin[i]);
            }
        }
        
    menu();
}


void convert_bin_to_decimal ()
{
    unsigned long bin, aditional; 
    int answer = 0;
    int step = 0;
    
    printf("enter the number: ");
    scanf("%d", &bin);
    printf("binary: %d" , bin);

    while (bin > 0)
    {
        aditional = bin % 10;
        answer += pow(2, step) * aditional;
        step += 1;
        bin = bin / 10;
    }
    
    printf("\ndecimal: %d", answer);

    menu();
}

