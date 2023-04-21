    #include "cs50.h"
    #include "cs50.c"
    #include <stdio.h>
    

    int main(void)
    {
        char name[20];
        printf (" What's your name? ");
        scanf("%s", name);
        int age = get_int ("How old are you: ");
        long phone_number = get_long ("What's your phone number: ");
        printf("His name is: %s. Your age is: %i, His number phone is: %li", name, age, phone_number);    
        
    }