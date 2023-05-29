// VIA learncpp.com

//CHAPTER 1: C++ BASICS

/*  Lesson 1.1: Statements & Structure of a Program
* Program - a sequence of instructions that tell the computer what to do
* Statement - a type of instruction that causes the program to perform some action
*   statements are the most important type of instruction in C++ programs
*   they are the smallest independent unit of computation in the language
*   act much like natural sentences do
*   most (not all) statements end in a semicolon
*   in high-level languages, a single statement has the ability to compile into many machine language instructions
*   types of C++ statements...
*     > declaration statements    > jump statements   > expression statements
*     > compound statements       > selection statements (conditionals)
*     > iteration statements (loops)    > try blocks

* Functions & main() Function
* Function - a collection of statements that get executed sequentially from top to bottom
*   RULE: every C++ program must have a special function named main()
*   programs typically terminate after the last statement in main() has been executed
* functions are typically written to do a specific job  */
// EXAMPLE...
#include <iostream>

int main()
{
  std::cout << "Hello world!";
  return 0;
}
/* Line 1: a special type of line called a PREPROCESSOR DIRECTIVE
* Line 3: tells the compiler that a function has been written (defined) and is called "main"
* Lines 4 & 7: tells the compiler which lines are a part of function main() (referred to as the function body)
* Line 5: the first statement within function main() that sends a character output statement to the console for outputting
* Line 6: return statement that sends a value back to the OS in order to indicate if it ran successfully or not (this is the last statement of a function that should execute)
* Line 2: blank & ignored by compiler (exists only for human readability)

* Syntax & Syntax Errors:
* Syntax - the rules that govern how sentences are constructed in a programming language
* Syntax Error - complaint messages sent from the compiler to the user to notify of errors in the program */
// EXAMPLE of code w/ syntax error...
#include <iostream>

int main()
{
  std::cout << "Hello world!"
  return 0;
}
/* this will generate a syntx error such as "c:\vcprojects\test1.cpp(6): error C2143: syntax error : missing ';'... or something similar
* this error indicates that your missing semicolon should be placed just before Line 6 (end of the statement of Line 5)
* the compiler will never fully process a program until all syntax errors are resolved  */

/*  Lesson 1.2: Comments
* Comment - a programmer-readable note that is inserted directly into the source code of the program
*   ignored by the compiler (human use only)
* C++ has two styles of comments: single-line and multi-line comments
*   Single-line comments are denoted by the '//' symbol at the beginning of the commented characters
*   Multi-line comments are denoted by '/*' at the beginning and the reverse at the end of the comment
*   The type of comment used depends on the length of the comment
*   Multi-line comments CANNOT be nested or unexpected results will occur, unltimately resulting in compile errors
* Comments have three purposes...
*   1. Used to describe what the library, program, or function does
*   2. Used to describe how the code will accomplish its goal
*   3. Used to describe why the code is doing something (never describe what the code is doing)
* Comments should be written in a way that makes sense to a programmer that has never seen your code before
* Commenting Out - converting one or more lines of code into a comment
*   serves as a convenient way to temporarily exclude parts of your code from being compiled in order to debug
*   there are 4 main reasons why a programmer may want to comment out code...
*     1. There are compile errors and you want to test if the rest of the program works correctly
*     2. There is new code that compiles but doesn't work correctly
*     3. You want to find the source of an error
*     4. You want to replace a piece of code without deleting it  */

/* Lesson 1.3: Introduction to Objects & Variables
* Data:
* Data - any information that can be moved, processed, or stored by a computer
*   the program then manipulates the data by sending it to the monitor to be displayed to the user
* computer data is typically stored in a format that is efficient for storage or processing (is not human readable)
* RAM - (Random Access Memory) a series of numbered mailboxes that can each be used to hold a piece of data while a program is running
* Value - a single piece of data that is stored in memory
* direct memory access is discouraged in C++ and should instead be done through objects
* Object - a region of storage that can store a value and has other associated properties
*   essentially used in programming to store and retrieve values
* Variable - a named object
* Identifier - the name of the object

* Variable instantiation:
* Definition - a special kind of declaration statement that creates a variable */
// EXAMPLE:
int x;
/* the compiler defines the variable name as 'x' and gives it the data type 'int'
* Runtime - when the program is run, the variable is instantiated
* Instantiation - the object is created and assigned a memory address
*   variables must be instantiated before they can store values
*   an instantiated object is often called an INSTANCE

* Data Types:
* Date Type - tells the compiler what type of value the variable will store
* Integer - a number that can be written without a fractional component (i.e., 4, 27, 0, -2, -12)
* Compile-Time - when the program is compiled
*   in C++, the variable's type must be known before compiling and cannot be changed without recompiling the program */
// EXAMPLE:
double width;
/* the compiler defines a variable name as 'width' and gives it the data type 'double'

* Defining Multiple Variables:
* multiple variables of the same type can be defined in the same statement when separated by a comma
*   the following two code snippets are essentially the same... */
// Snippet 1
int a;
int b;
// Snippet 2
int a, b;
/* common mistakes in this method include giving each variable a type when defining in sequence and/or trying to define variables of different types in the same statement
*   variables of different types cannot be declared in sequence and must be on a separate line */

/* Lesson 1.4: Variable Assignment & Initialization
* Variable Assignment:
* Copy Assignment - assigning a value to a variable after it has been defined
*   named such because it copes the value on the right-hand side of the = operator to the variable on the left
* Assignment Operator - the '=' operator (not to be confused with '==' operator)

*Initialization:
* variable assignment requires at least two statements: one to define and one to assign
*   these two steps can be combined into initialization
* Initializer - the value used to initialize a variable
*   initializing in C++ is surprisingly complex (there are 6 basic methods) */
// EXAMPLES...
int a;  // no initializer (default initialization)
int b = 5;  // initializer after equal sign (copy initialization)
int c(6); // initializer in parenthesis (direct initialization)
int d{ 7 }; // initializer in braces (direct list initialization)
int e = { 8 };  // initializer in braces after equal sign (copy list initialization)
int f {}; // initializer is empty braces (value initialization)
/* when no initialization value is provided, it is referred to as DEFAULT INITIALIZATION
*   in most cases, default initialization leaves a variable with an indeterminate value
* the direct and copy initialization methods were inherited from C and have fallen out of modern favor in C++ due to being less efficient than other forms
* list initialization/uniform initialization/brace initialization is the modern and preferred method for variable initialization in C++
*   has the added benefit of disallowing "narrowing conversions" which throws a compile error of the variable cannot safely hold a value

* Value Initialization & Zero Initialization:
* Value Initialization - when a variable is list initialized using empty braces
*   in most cases will initialize the variable to zero
* Zero Initialization - cases of list initialization where zeroing occurs */
// EXAMPLES OF USE CASES...
// use explicit initialization value of zero if that value is actually being used
int x { 0 };
std::cout << x;
// use empty value initialization if the value is temporary and will be replaced
int x {};
std::cin >> x;
/* ALWAYS initialize variables upon creation!!!

* Unused Initialized Variables & [[maybe_unused]]:
* compilers will typically generate warnings if a variable is initialized byt not used 
*   these warnings will become erros if the compiler has enabled "treat warnigsn as errors" setting
* can be fixed with "[[maybe_unused]]" attribute
*   tells the compiler to expect that the variable may not be used so that it will not generate an error or warning */

/* Lesson 1.5: Introduction to iostream: cout, cin, & endl
*I/O Library:
* Input/Output Library - part of the C++ standard library that deals with basic input and output
*   used to get input from the keyboard and output to the console
*   functionality is used by including the 'iostream' header at the top of any code file with '#include <iostream>'
*std::cout
* used to send data to the console to be printed as text
* stands for 'character output' */
// EXAMPLE...
#include <iostream>

int main()
{
  std::cout << "Hello world!"; //prints to console
  return 0;
}
/* the '<<' is called the INSERTION OPERATOR, which sends the text
* cout can also send numbers and other acceptable values and can also be used to print them
* multiple insertion operators can be used on the same line to concatenate multiple outputs */
// EXAMPLE...
#include <iostream>

int main()
{
  int age { 20 }; //defines int variable 'age' and assigns value 20
  std::cout << "I am " << age << " years old."; //concatenates to a sentence
  return 0;
}

/* std::endl:
* note that separate output statements don't result in outputs on separate lines
* command 'std::endl' tells the console when to move to a new line
*   stands for "end line" and is similar in use to the traditional '\n' command
* BEST PRACTICE: output a new line whenever a line of output is complete */
// EXAMPLE...
#include <iostream>

int main()
{
  std::cout << "Hi!" << std::endl; //cursor will move to next line
  std::cout << "My name is Ally." << std::endl;
  return 0;
}
/* prints "Hi!" '\n' "My name is Ally." '\n'
* command 'std::cout' is buffered and is not sent to the console automatically
* Buffer - stores the requested output in a region of memory and is set aside to collect the requests
*   periodically, the buffer is flushed, such that all data in the buffer is sent to the console
*   buffering is used for large amounts of data to maximize overall throughput at the cost of response time

* std::endl vs. \n:
* std::endl is inefficient since it moves the cursor to a new line and also flushes the buffer each time it is executed
*   because of this, '\n' is preferred, which moves the cursor to a new line but doesn't request a flush, which increases performance of the console
* '\n' limits clutter in the code and increases readability
*   can be used two different ways */
// EXAMPLE...
#include <iostream>

int main()
{
  int x{ 5 };
  std::cout << "x is equal to: " << x << '\n'; //uses '\n'
  std::cout << "x has been assigned a number\n"; //uses embedded '\n'
  return 0;
}

/* std::cin:
* another preferred variable that is defined in the iostream library
*   stands for 'character input' and reads input from the keyboard using '>>', referred to as the EXTRACTION OPERATOR
*   input must be stored in a variable to use std::cin command
* serves as a simple way to get keyboard input from the user
*   this command does not need '\n' since the user must manually press ENTER to submit their input
*   it is also possible to concatenate values on a single line using std::cin */
// EXAMPLE...
#include <iostream>

int main()
{
  std::cout << "Enter two numbers separated by a space: ";
  
  int x{ }; //defines var x to hold user input
  int y{ }; //defines var y to hold user input
  std::cin >> x >> y; //gets the user input & stores it in the variables
  
  std::cout << "You entered " << x << " and " << y << '\n';
  return 0;
}
/* produces output 'Enter two numbers separated by a space: 5 6' '\n' 'You entered 5 and 6' '\n'  */

/*Lesson 1.6: Uninitialized Variables & Undefined Behavior:
*

//END OF CHAPTER 1 NOTES

//LESSON 2.9: NAMING COLLISIONS & INTRO TO NAMESPACES

//END OF LESSON 2.9 NOTES

//LESSON 2.10: INTRO TO THE PREPROCESSOR

//END OF LESSON 2.10 NOTES

//CHAPTER 3: DEBUGGING C++ PROGRAMS

//END OF CHAPTER 3 NOTES

//END OF LVL 1.2 NOTES
