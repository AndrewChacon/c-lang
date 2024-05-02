#include <stdio.h> // add packages 

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

    return 0;
}