#include <stdio.h> // add packages 
#include <stdbool.h> // for booleans
#include <math.h> // include math functions

int main() { // read procedures

    // printf("I like pizza!\n");
    // printf("Its really good");
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

    // printf("\n1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    // // grid of numbers

    // printf("\"I like pizza\" - this is a quote by MEEEE :3 ");
    // printf("\n\'I like pizza\' - this is a quote by MEEEE :3 ");
    // escape sequence for quotes

    // VARIABLES IN C-LANG

    /* variable - allocate memory to store a value 
       call var to access value 
       declare its name and type for data we are storing
    */

    // int x;                  // declaration
    // x = 123;                // initalization
    // int y = 123;            // declaration + initalization

    // int age = 24;           // integer
    // float gpa = 2.05;       // floating point number
    // char grade = 'C';       // single character
    // char name[] = "Bro";    // array of characters

    // format specifier
    // printf("\nHello %s", name);
    // printf("\nYou are %d years old", age);
    // printf("\nYour average grade is %c", grade);
    // printf("\nYour gpa is %f", gpa);


    // DATA TYPES RAHHHHHHHHHH
    // char a = 'C';           // single character %c
    // char b[] = "Andrew";    // array of characters %s
    // float c = 3.14;         // 4 bytes - 32 bits - %f
    // double d = 3.141592;    // 8 bytes - 64 bits - %lf
    // bool e = true;          // true or false - %d
    // int j = 234234;         // whole int - 4 bytes - %d
    // char f = 100;           // 1 byte - %d or %c = 0-127
    // unsigned char g = 255;  // 1 byte - %d or %c = 0-255

    // FORMAT SPECIFIERS BOOOOOOO >:(
    
    // %c - character
    // %s - string 
    // %f - float
    // %lf - double 
    // %d - integer

    // %.1 - decimal precision
    // %1 - min field width
    // %- left align
    // float item1 = 5.75;
    // float item2 = 10.00;
    // float item3 = 100.99;

    // printf("\nItem 1: $%-8.2f", item1);
    // printf("\nItem 2: $%8.2f", item2);
    // printf("\nItem 3: $%8.2f", item3);

    // // CONSTANTS
    // const float PI = 3.14159; //fixed value that cant be altered
    // printf("\n%f", PI);

    // ARITHMETIC I HATE MATHHHH
    // x = 5;
    // y = 2;
    // int z = x + y;

    /*
    +   = add
    -   = sub
    *   = multi
    /   = divi
    %   = modulus (remainder of the division)
    ++  = increment 
    --  = decrement

    dividing ints truncates the value
    convert to float to not lose data
    */

    // printf("\n x + y = %d", z);

    // AUGMENTED ASSIGNMENT OPERATORS

    /*
    x = x + 2
    or
    x += 2      shortcut for the line above

    x = x - 3
    x -= 3

    x = x * 4
    x *= 4

    etc
    */

    // int age;
    // char name[25];
    // printf("\nWhats your name?");
    // // scanf("%s", &name); - only reads up to a whitespace
    // fgets(name, 25, stdin); // able to read any whitespaces
    // printf("\nHow old are you?");
    // scanf("%d", &age);
    // printf("\nYou are %d years old", age);
    // printf("\nHello %s how are you?", name);

    // NERD MATH FUNCTIONS >:/

    // double A = sqrt(9);     // square root
    // double B = pow(2, 4);   // power of 
    // int C = round(3.14);
    // int D = ceil(3.14);     // rounds up
    // int E = floor(3.99);    // rounds down
    // double F = fabs(-100);  // absolute value
    // double G = log(3);      // logarithm
    // double H = sin(45);
    // double I = cos(45);
    // double J = tan(45); 

    // printf("\n%lf", B);

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);
    printf("\nCircumfernece: %.2lf", circumference);
    printf("\nArea: %.2lf", area);

    return 0;
}