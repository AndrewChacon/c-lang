#include <stdio.h> // add packages 
#include <stdbool.h> // for booleans

int main() { // read procedures

    printf("I like pizza!\n");
    printf("Its really good");
    //return 0; // program exit status - 0 = no errors


    // gcc HelloWorld.c   - compile program
    // ./a.out            - run program

    // COMMENTS AND ESCAPE SEQUENCES

    // this is a comment

    /* 
    this is a
    multi line comment
    */

    /* 
    escape sequences - backslash followed by a character

    \n = newline in a line a of text such as when we used the printf function
    \t = new table in a line of text
    */

    printf("\n1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    // grid of numbers

    printf("\"I like pizza\" - this is a quote by MEEEE :3 ");
    printf("\n\'I like pizza\' - this is a quote by MEEEE :3 ");
    // escape sequence for quotes

    // VARIABLES IN C-LANG

    /* variable - allocate memory to store a value 
       call var to access value 
       declare its name and type for data we are storing
    */

    int x;                  // declaration
    x = 123;                // initalization
    int y = 123;            // declaration + initalization

    int age = 24;           // integer
    float gpa = 2.05;       // floating point number
    char grade = 'C';       // single character
    char name[] = "Bro";    // array of characters

    // format specifier
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
    printf("\nYour average grade is %c", grade);
    printf("\nYour gpa is %f", gpa);


    // DATA TYPES RAHHHHHHHHHH
    char a = 'C';           // single character %c
    char b[] = "Andrew";    // array of characters %s
    float c = 3.14;         // 4 bytes - 32 bits - %f
    double d = 3.141592;    // 8 bytes - 64 bits - %lf
    bool e = true;          // true or false - %d
    int j = 234234;         // whole int - 4 bytes - %d
    char f = 100;           // 1 byte - %d or %c = 0-127
    unsigned char g = 255;  // 1 byte - %d or %c = 0-255

    // FORMAT SPECIFIERS BOOOOOOO >:(
    
    // %c - character
    // %s - string 
    // %f - float
    // %lf - double 
    // %d - integer

    // %.1 - decimal precision
    // %1 - min field width
    // %- left align
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("\nItem 1: $%-8.2f", item1);
    printf("\nItem 2: $%8.2f", item2);
    printf("\nItem 3: $%8.2f", item3);

    return 0;
}