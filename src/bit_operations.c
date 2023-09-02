#include <stdio.h>
#include <math.h>

void menu();
void bit_operations();



void bits_bin_to_decimal(int count, int bin_output[32]){
    
    int answer = 0, aditional;
    int base = 0;

    for(int i = count-1; i > - 1; i--){

        aditional = pow(2,base) * bin_output[i];
        answer += aditional;
        base += 1;
    }
    printf("\nDecimal num: %d", answer);
}


                                //READ_BIT

void read_bit(){

    int num, position, aditional;
    int bin[32];

    printf("\nenter the decimal number: ");
    scanf("%d", &num);
    printf("\nenter the bit position: ");
    scanf("%d", &position);
    
    for (int i = 0; i < 32; i++)
        {
            bin[i] = 3;
        }

    for (int i = 0; num > 0; i++)
        {
            aditional = num % 2;
            bin[i] = aditional;
            num = num / 2;
        }

    int count = 0;



    for (int i = 31; i > -1; i--)
        {   

            if(bin[i] != 3){
                if(position == count){
                    printf("\nbit\n: %d", bin[i]);
                }
                count+=1;
            }   
        }
        
    
    bit_operations();
}

                                //SET_BIT

void set_bit(){

    int num, position, aditional;
    int bin[32], bin_output[32];

    printf("\nenter the decimal number: ");
    scanf("%d", &num);
    printf("\nenter the bit position: ");
    scanf("%d", &position);

    for (int i = 0; i < 32; i++)
        {
            bin[i] = 3;
            bin_output[i] = 3;
        }

    for (int i = 0; num > 0; i++)
        {
            aditional = num % 2;
            bin[i] = aditional;
            num = num / 2;
        }

    int count = 0;
 
    printf("new binary num: ");
    
    for (int i = 31; i > -1; i--)
        {   
            if(bin[i] != 3){
                if(position == count){
                    bin_output[position] = 1;
                } else{
                    bin_output[count] = bin[i]; 
                }
                printf("%d", bin_output[count]);
                count += 1;
            }
        }
        

    bits_bin_to_decimal(count, bin_output);

    bit_operations();
}

                                //RESET_BIT

void reset_bit(){
    
    int num, position, aditional;
    int bin[32], bin_output[32];

    printf("\nenter the decimal number: ");
    scanf("%d", &num);
    printf("\nenter the bit position: ");
    scanf("%d", &position);

    for (int i = 0; i < 32; i++)
        {
            bin[i] = 3;
            bin_output[i] = 3;
        }

    for (int i = 0; num > 0; i++)
        {
            aditional = num % 2;
            bin[i] = aditional;
            num = num / 2;
        }

    int count = 0;
 
    printf("new binary num: ");
    
    for (int i = 31; i > -1; i--)
        {   
            if(bin[i] != 3){
                if(position == count){
                    bin_output[position] = 0;
                } else{
                    bin_output[count] = bin[i]; 
                }
                printf("%d", bin_output[count]);
                count += 1;
            }
        }
        
    bits_bin_to_decimal(count, bin_output);
    
    bit_operations();
}

                                //TOGLE_BIT

void toggle_bit(){
    int num, position, aditional;
    int bin[32], bin_output[32];

    printf("\nenter the decimal number: ");
    scanf("%d", &num);
    printf("\nenter the bit position: ");
    scanf("%d", &position);

    for (int i = 0; i < 32; i++)
        {
            bin[i] = 3;
            bin_output[i] = 3;
        }

    for (int i = 0; num > 0; i++)
        {
            aditional = num % 2;
            bin[i] = aditional;
            num = num / 2;
        }

    int count = 0;
 
    printf("new binary num: ");

    for (int i = 31; i > -1; i--)
        {   
            if(bin[i] != 3){
                if(position == count){
                    if(bin[i] == 1){
                        bin_output[count] = 0;
                    } else {
                        bin_output[count] = 1;
                    }
                } else{
                    bin_output[count] = bin[i]; 
                }
                printf("%d", bin_output[count]);
                count += 1;
            }
        }
    
    bits_bin_to_decimal(count, bin_output);

    bit_operations();
}



void bit_answer_check(int answer){

    if(answer == 1)
    {
        read_bit();
    }
    if(answer == 2)
    {
        set_bit();
    }
    if(answer == 3)
    {
        reset_bit();
    }
    if(answer == 4)
    {
        toggle_bit();
    }
    if(answer == 5)
    {
        menu();
    }
    if(answer != 1 && answer != 2 && answer != 3) {
        printf("\nYou put inpropriate number or symbol\n");
        bit_operations();
    }
}


void bit_operations()
{
  printf("%s","\nChose the number of operation:\n\
    1 -- read_bit\n\
    2 -- set_bit\n\
    3 -- reset_bit\n\
    4 -- toggle_bit\n\
    5 -- menu\n");

    int answer;
    scanf("%d", &answer);
    bit_answer_check(answer);
}


