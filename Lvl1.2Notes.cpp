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
* Uninitialized Variables:
*C++ does not initialize most variables to a given value automatically
* Uninitialized Variable - a variable that has not been given a known value
*   using values of uninitialized variables can lead to unexpected errors
*   most modern compilers will attempts to detect if a variable is being used without being given a value
*     will generally throw a compile-time warning or error such as 'c:\VCprojects\test\test.cpp(11) : warning C4700: uninitialized local variable 'x' used
* using uninitialized variables is one of the most common mistakes & is the most challenging to debug
*   a simple program structure can help with this... */
#include <iostream>

void doNothing(int&) //in place to trick the compiler into thinking variable 'x' is used
{
}

int main()
{
  int x; //defines a var 'x' as an integer & is uninitialized
  doNothing(x); //make the compiler think a value is being assigned to 'x'
  std::cout << x << '\n'; //prints value of 'x' to screen, but will output a random value
  return 0;
}

/* Undefined Behavior:
* using values from uninitialized variables is a prime example of undefined behavior
* Undefined Behavior - the result of exeuring code whose behavior is not well-defined by the C++ language
*   C++ doesn't have any rules determining what happens if the value of a variable is used that has not been given a known value
* Signs of undefined behavior:
*   > your program produces different results each time it runs
*   > your program consistently prodcues the same incorrect result
*   > your program behaves inconsistently (produces the correct result sometimes but other times not)
*   > your program seems like it is working but produces incorrect results later on
*   > your program crashes, either immediately or later
*   > your program works on some compilers but not others
*   > your program works until your change some other seemingly unrelated code

* Implementation-Defined Behavior & Unspecified Behavior:
* defined as the behavior of some syntax when it is left up to the implementation (the compiler) to define
*   different compilers may produce different results in regards to a simple program
* Unspecified Behavior - almost identical to implementation-defined behavior in that the behavior is left up to the compiler, but the compiler is not required to document the behavior
*   generally want to avoid implementation-defined and unspecified behavior, as it may cause malfunctions */

/*Lesson 1.7: Keywords & Naming Identifiers
* C++ reserves a set of 92 words (as of C++20) for its own use
* Keyword - a reserved word in a programming language that cannot be used for any other purpose than what it is intended
* the 92 keywords in C++20...
*     - alignas     - alignof       - and       - and_eq        - asm       - auto          - bitand            - bitor
*     - bool        - break         - case      - catch         - char      - char8_t       - char16_t          - char32_t
*     - class       - compl         - concept   - const         - consteval - constexpr     - constinit         - const_cast
*     - continue    - co_await      - co_return - co_yield      - decltype  - default       - delete            - do
*     - double      - dynamic_cast  - else      - enum          - explicit  - export        - extern            - false
*     - float       - for           - friend    - goto          - if        - inline        - int               - long
*     - mutable     - namespace     - new       - noexcept      - not       - not_eq        - nullptr           - operator
*     - or          - or_eq         - private   - protected     - public    - register      - reinterpret_cast  - requires
*     - return      - short         - signed    - sizeof        - static    - static_assert - static_cast       - struct
*     - switch      - template      - this      - thread_local  - throw     - true          - try               - typedef
*     - typeid      - typename      - union     - unsigned      - using     - virtual       - void              - volatile
*     - wchar_t     - while         - xor       - xor_eq
* C++ also defines special identifiers: 'override', 'final', 'import', and 'module'
*   have a specific meaning whan used in certain contexts but are not reserved

* Identifier Naming Rules:
* there is a handful of rules that must be followed when naming identifiers...
*   > the identifier can not be a keyword
*   > the identifier can only be composed of letters (lower or upper case), numhers, and the underscore character
*     --> cannot contain symbols or whitespace
*   > the identifier must begin with a letter or an underscore (it CANNOT start with a number)
*   > C++ is case sensitive (i.e., nvalue, NValue, and nValue are all different identifiers)

* Identifier Naming Best Practices:
* it is a convention in C++ that variable names should start with lowercase letters
*   if a var name is one word, the whole thing should be written in lowercase
* function names are often started with lowercase letters
*   identifier names that start with a capitalletter are typicallu used for user-defined types (such as structs, classes, and enumerations)
* if the var name is multi-word, the words can either be separated by underscores or intercapped using camelCase conventions */
// EXAMPLES...
int my_variable_name; //correct
int my_function_name(); //correct
int myVariableName; //correct
int myFunctionName(); //correct
int my variable name; //invalid (whitespace not allowed)
int my function name(); //invalid (whitespace not allowed)
int MyVariableName; //valid but incorrect (should start w/ lowercase)
int MyFunctionName(); //valid but incorrect (should start w/ lowercase)
/* if you are working in someone else's code, it is best practice to follow the same coding conventions and style that it was written in
* AVOID naming identifiers beginning with an underscore (these are typically reserved for OS, library, and/or compiler use
* your identifiers should make clear what the value is for (find a medium betweeen over and under complex names) */
// EXAMPLES OF GOOD AND BAD IDENTIFIERS...
int ccount;  //BAD (What does the 'c' before count stand for?
int customerCount;  //GOOD  (Clear what we are counting)
int i;  //EITHER (Okay if use is trivial, bad otherwise)
int index;  //EITHER (Okay if obvious what we are indexing)
int totalScore; //EITHER (Okay if there is only one score, otherwise too ambiguous)
int _count; //BAD (Do not start with an underscore)
int count;  //EITHER (Okay if obvious what we are counting)
int data; //BAD (What kind of data?)
int time; //BAD (Is this in seconds, minutes, or hours?)
int minutesElapsed; //GOOD (Descriptive)
int value1, value2; //EITHER (Can be hard to differentiate between the two)
int numApples;  //GOOD (Descriptive)
int monstersKilled; //GOOD (Descriptive)
int x,y;  //EITHER (Okay if use is trivial, bad otherwise)
/* in any case, avoid using abbreviations unless they are common, as they make your code harder to read
* always include comments that clarify what a peice of code does if the meaning of the code has any possibility of being questioned */

/*Lesson 1.8: Whitespace & Basic Formatting
* Whitespace - a term that refers to characters that are used for formatting purposes
*   in C++, this refers primarily to spaces, tabs, and new lines
*   the compiler generally ignores whitespace with a few minor exceptions (i.e., processing text literals)
*   C++ is referred to as a 'whitespace-indepedent language'
* new lines are not allowed in quoted text
*   quoted text separated by whitespace will be concatenated
* another exception that C++ pays attention to whitespace is when single-line comments extend into other lines

* Basic Formatting:
* C++ does not enforce formatting restrictions on the programmer
*   the best coding format is the one that produces the most readable, consistent code
* recommendations for basic formatting in C++...
*   1. Use tabs or spaces for indentation (3-4 spaces per indent)
*   2. The two acceptable styles for function braces are on the same line as the statement or on the line immediately following it
*      ---> the common practice is to start a new line with curly braces under the statement
*   3. Each statement within curly braces should start one tab intentation in from the opening brace of the function
*   4. Lines should not be too long (around 80 characters has been the de facto standard)
*      ---> if lines should be longer, they should be split reasonably into multiple lines
*   5. If a long line is split with an operator ( << or +), the operator should be plcaed at the beginning of the next line
*   6. use whitespace to make your code easier to read by aligning values or comments to or adding spaces between blocks
* ultimately, C++ gives the user the power to choose any formatting styles, but it is best to understand readable conventions

* Automatic Formatting:
* most IDEs will assist with formatting as it is typed
*   however, as code is added or removed or code is pasted, the IDE's default formatting can be altered
*   automatic formatting settings are recommended to keep the coding style consistent throughout the program  */

/*Lesson 1.9: Introduction to Literals & Operators
* Literal - (literal constant) a fixed value that has been inserted directly into the source code
*   literals and variables both have a value and a type, but the value of a literal is fixed and can't be changed
*   in contrast, the values stored in a variable must be fetched by the compiler in order to produce an output
*   the literal is placed directly in the executable, while a variable is placed in memory
* Operator - a specific operation to be performed that is denoted by a symbol representing that operation
* Operation - a mathematical process involving zero or more input values
* Operands - the input values of an operation
* Return Value - the output value of an operation in C++
* the most common operators are addition (+), subtraction (-), multiplication (*), and division (/)
*   in C++, assignment (=) is an operator as well, as are insertion (<<), extraction (>>), and equality (==)
*   some operators are also keywords, such as 'new', 'delete', and 'throw'
* Arity - the number of operands that an operator takes as input
*   operators in C++ come in four different arities...
*     1. Unary operators act on one operand (i.e., '-')
*     2. Binary operators act on two operands, often called 'left' and 'right' (i.e., << and >>)
*     3. Ternary operators act on three operands (the conditional operator is the only ternary)
*     4. Nullary operators act on zero operands (the throw operator is the only nullary)
* operators can have more than one meaning depending on how they are used

* Chaining Operators:
* operators can be chained together such that the output of one operator can serve as the input of another
*   i.e., the expression 2 * 3 + 4 translates to 6 + 4 = 10
* the arithmetic operators execute in the same order as they do in standard mathematics: PEMDAS most commonly
*   other countries sometimes teach PEMDAS as PEDMAS, BEDMAS, BODMAS, or BIDMAS

* Return Values & Side Effects
* there are some operators, such as 'delete' and 'throw' that do not produce a return value
* some operators have additional behaviors
* Side Effect - an operator that has some observable effect beyond producing a return value
*   i.e., when x = 5 is evaluated, the assignment operator has the side effect of assigning the value of 5 to variable x and printing to console
*   operators with side effects are usually called for the behavior of the side effect rather than for the return value */

/*Lesson 1.10: Introduction to Expressions
* Expressions:
*   consider the following code...  */
int five()
{
  return 5;
}
int main()
{
  int a{ 2 }; //initialize variable a with a literal value of 2
  int b{ 2 + 3 }; //initialize variable b with computed value 5
  int c{ (2*3) + 4 }; //initialize variable c with computed value 10
  int d{ b }; //initialize variable d with variable 5
  int e{ five() };  //initialize variable e with function return value 5
  
  return 0;
}
/* each of these statements defines a new variable and initializes it with a value
* Expression -  a combination of literals, variables, operators, and function calls that calculates a single value
* Evaluation - the process of executing an expression
* Result - the single value produced from the expression
*   assume ALL expressions are calculated down until a single value remains

* Expression Statements:
* defined as a statement that consists of an expression followed by a semicolon
*   when the expression statement is executed, the expression will be evaluated
*   when an expression is used in an expression statement, any return value generated by the xpression is discarded
* useless expression statements can compile but have no effect
*   i.e., expression (2 * 3;) is an expression statement that evaluates to 6, which is discarded  */

/*Lesson 1.11: Developing Your First Program
* Create a program that asks the user to enter an integer
* Wait for them to input an integer
* Tell them what 2 times the number is
* The program should produce the following output...
*   "Enter an integer:  4" [ENTER]  "Double that number is: 8"
* BEST PRACTICE: Write one piece of a program at a time, make sure it compiles, and test it before moving on
* the preferred solution... */
#include <iostream>

int main()
{
  std::cout << "Enter an integer: ";
  
  int num();
  std::cin >> num;
  
  std::cout << "Double that number is: " << num * 2 << '\n';
  
  return 0;
}
//END OF CHAPTER 1 NOTES

//LESSON 2.9: NAMING COLLISIONS & INTRO TO NAMESPACES
/* C++ requires that all identifiers be unique and non-ambiguous
* Naming Collision - (naming conflict) an error generated by two identical identifiers being introduced into the same program
*   in this error, the compiler or linker cannot differentiate between the two
*   if the colliding identifiers are introduced into the same file, the result will be a compiler error
*   if the colliding identifiers are introduced into separate files belonging to the same program, it will be a linker error
* C++ uses local scope, which keeps local variables defined inside functions from colliding with each other
*   local scope DOES NOT work for function names
* Namespace - a region that allows you to declare names inside of it for the purpose of disambiguation
*   provides a scope region called 'namespace scope', which acts in the same way as the local scope
*   often used to group related identifiers in a large project to help ensure they don't collide with others
* Global Namespace - (global scope) an implicitly defined namespace that is not defined inside a class, function, or namespace
*   only declarations and definitions can appear in the global scope
*   initializers for global variables are the only exception
* the 'std' namespace (standard namespace) is its own namespace within C++ that keeps identifiers from conflicting
*   because 'cout' is part of the 'std' namespace, the name 'cout' won't conflict with any other objects or functions in the global namespace
*   similarly, when accessing an identifier inside a namespace, the compiler must be told that the identifier is there
*     there are two ways that this can be done... */
//Explicit Namespace Qualifier std::
//    the most straightforward way, explicitly using the std:: prefix
#include <iostream>

int main()
{
  std::cout << "Hello world!";
  return 0;
}
//A 'Using Directive' Statement
//    allows the user to access namespace IDs without a prefix, but this practice is HIGHLY DISCOURAGED
#include <iostream>

using namespace std;

int cout()
{
  return 5;
}
int main()
{
  cout << "Hello world!"; //COMPILE ERROR: which 'cout' is needed here?
  return 0;
}
//using directive statements are counter-intuitive to the purpose of namespaces
/* Scope Resolution Operator - the :: symbol is an operator that defines the left side as the namespace and the right as the identifier
*     if nothing is to the right of the :: operator, a global namespace is assumed
* Qualified Name - the name for an identifier when it includes a namespace prefix */
//END OF LESSON 2.9 NOTES

//LESSON 2.10: INTRO TO THE PREPROCESSOR
/* Prior to compilation, each .cpp file goes through a preprocessing phase
*   in this phase, a preprocessor program makes various changes to the text of the code file
*   the preprocessor does not actually modify the code
* Translation Unit - the result of a finished preprocessor file
*   this is what is compiled by the compiler
* the entire process of preprocessing, compiling, and linking is called 'translation'

* Preprocessor Directives:
* when the preprocessor runs, it scans the code file for preprocessor directives
* Preprocessor Directive - instructions that start with a '#' symbol and end with a new line (NOT a semicolon)
*   these directives tell the preprocessor to perform certain text manipulations

* #include :
* when you #include a file, the preprocessor replaces the #include directive with the contents of the included file
*   the included contents are then preprocessed and compiled
* #include is almost exclusively used to include header files

* Macro #define :
* the #define directive can be used to create a macro
* Macro - a rule that defines how input text is converted into replacement output text
*   two basic types of macros: object-like and function-like macros
*   Function-Like macros act like functions and serve a similar purpose (use is generally considered bad practice)
*   Object-Like macros can be defined with or without substitution text (w/ substitution text should now only be seen in legacy code)
* Object-Like macros without substitution text are generally okay to use
*   macros of this form take any further occurrence of the identifier, remove it, and replace it with nothing

* Conditional Compilation:
* this preprocessor directive allows the user to specify under what conditions something will or won't compile
*   three main directives are used for this: #ifdef   #ifndef   #endif
* the #ifdef directive allows the preprocessor to check whether an identifier has been previously #define
*   if so, the code between #ifdef and matching #endif is compiled
*   else, the code is ignored
* the #ifndef directive is the opposite of #ifdef, such that it allows the user to check if something has NOT been #define yet
* BOTH DIRECTIVES MUST END WITH #endif

* #if 0 :
* this extra directive is used to exclude a block of code from being compiled (as if it were a comment block)
*   this provides a convenient way to "comment out" code to test and debug
* to temporarily re-enable code that has been disabled, change #if 0 to #if 1 */
//END OF LESSON 2.10 NOTES

//CHAPTER 3: DEBUGGING C++ PROGRAMS

/*Lesson 3.1: Syntax & Semantic Errors
* errors generally fall into one of two categories: syntax errors or semantic (logic) errors
* Syntax Error - occurs when you write a statement that is not valid according to the grammar of the C++ language
*   includes errors such as missing semicolons, undeclared variables, mismatched parentheses or braces, etc.
*   most compilers will generate syntax error warnings so that they can be easily fixed
* Semantic Error - occurs when a statement is syntactically valid, but does not do what the programmer intended
*   may cause your program to crash, such as using the case of division by zero
*   most of the time will just produce the wrong output
* modern compilers are becoming increasing better at detecting semantic errors, but most of the time are hard to find in the code
*   the use of debugging techniques is the only way to resolve these errors */

/*Lesson 3.2: The Debugging Process
* once a problem has been identified, debugging the code generally consists of five steps...
*   1. Find the root cause of the problem (usually the line of code that isn't working)
*   2. Ensure that you understand why the issue is occurring
*   3. Determine how you'll fix the issue
*   4, Repair the issue causing the problem
*   5. Retest to ensure the problem has been fixed and no new problems have emerged */
//EXAMPLE...
#include <iostream>

//Adds two numbers
int add(int x, int y)
{
  return x - y;
}
int main()
{
  std::cout << add(5, 3) << '\n';
  return 0;
}
/*Find the root cause: on Line 10, the program passes in literals from arguments (5 and 3)
*   the object is to add, but the program is producing the wrong output
*   the only statement in the function that should add is Line 6
* Understand the problem: the wrong operator is being used in Line 6
* Determine a fix: simply change the operator from '-' to '+'
* Repair the issue: change the operator as stated above
* Retest: after implementing the change, rerunning the program will now produce the correct output  */

/*Lesson 3.3: A Strategy for Debugging
* bugs can be caused by making bad assumptions
* bugs can often be located by the integrated debugger in the IDE with three steps...
*   1. Figure out how to reproduce the problem
*   2. Run the program and gather information to narrow down where the problem is
*   3. Repeat the prior step until the problem is found
* Reproduction Steps - a list of clear and precise steps that can be followed to cause the issue to reoccur
* if reproduction does not work, some educated guesses can be made about where the bug is   */

/*Lesson 3.4: Basic Debugging Tactics
* Debugging Tactic #1: Commenting out your code
*   commenting out blocks of code will allow the issue to be quickly isolated to a single function
*     when the problem goes away, the block of code that was just commented out is responsible and should be evaluated
*   this tactic doesn't pinpoint the issue, but it does decrease the amount of code that needs to be looked through
* Debugging Tactic #2: Validating your code flow
*   a common issue in complex programs is that a function is being called too many times
*   in these cases, it is helpful to place statements at the top of the function to print the function's name
*     when the program runs, the user can see which functions are getting called
*   TIP: when adding temporary debugging statements, it can be helpful to not indent them so they are easier to see
* Debugging Tactic #3: Printing values
*   some types of bugs may be calculating or passing the wrong value
*   the user can output the value of variables (including parameters) or expressions to ensure correctness
*   this is another method to isolate the issue to a code block or even a singular line
*     in some cases, the programmer may add a function 'getUserInput' that passes all called variables into 'x' to see the outputs
*     this function will usually end with 'return --x;'
*   'return --x;' creates a double negative of the output
* using print statements to debug code is NOT best practice b/c...
*   1. Debug statements clutter the code
*   2. Debug statements clutter the output of the program
*   3. Debug statements must be removed after debugging, which makes them non-reusable
*   4. Debug statements require modification of your code to both add and to remove, which can introduce new bugs */

/*Lesson 3.5: More Debugging Tactics
* these tactics will mitigate some of the issues described in the previous lesson
* Conditionalizing Your Debugging Code:
*   one way to make it easier to disable and re-enable debugging throughout your program is to make your debugging statements conditional using preprocessor directives
*     this allows code to be disabled/enabled by simply commenting out the directive
* Using a Logger:
*   an alternative approach to using a directive statement is to send the debugging info to a log file
*   Log File - a file (normally stored on a disk) that records events that occur in software
*     the process of writing information to a log file is referred to as 'logging'
*   log files have a few advantages such as avoiding clutter & ease of sending the files for third-party diagnosis
*     a logger can also be easily disabled by changing the log identifier to 'none' */

/*Lesson 3.6: Using an Integrated Debugger: Stepping
* Program State - the current point of execution within the program and the information held within that point
* modern IDEs come with an integrated debugger tool that is designed to identify bugs without altering the code
* Debugger - a computer program that allows the programmer to control how another program executes while examining the program state
*   this tool helps the programmer observe the path of execution as the program runs, but at a slower pace
* integrated debuggers are convenient and recommended for beginners
*   command line debuggers are well-supported and are still commonly used in environments that do not support graphical interfaces
* TIP: Debugger keyboard shortcuts will only work if the IDE debugger is the active window
* WARNING: Do not use the integrated debugging feature without making sure that your compiler is correctly configured
* Stepping - the name for a set of related debugger features that let the user execute (step through) the code piece by piece
* Step Into - a debugging command that executes the next statement in the normal execution path and pauses the execution to examine the state
*   if the executed statement contains a function call, 'step into' causes the program to jump to the top of the function and pause
* when the program is not running and the first debug command executes, the following things will likely happen...
*   > the program will recompile if needed
*   > the program will begin to run but the console output will be empty
*   > the IDE may open some diagnostic windows, such as "Diagnostic Tools", "Call Stack", and "Watch"
* the 'step into' command will show some type of marker on the current line number as the stepping occurs
*   the line it points to will be executed NEXT, not what is being executed currently
* Step Over - a debugging command that executes the next statement in the normal execution path of the program, executes through a function, then pauses
*   this command only returns control to the programmer after an entire function block as been stepped over
*   provides a convenient way to skip functions that you are sure already work
* Step Out - executes the next line of code and all remaining code in the function currently being executed
*   provides a convenient way to execute the rest of a function block when it has been debugged */

/*Lesson 3.7: Using an Integrated Debugger: Running & Breakpoints
* modern debuggers provide more tools than stepping to efficiently debug programs
* Run to Cursor - a command that executes the program until execution reaches the statement selected by the cursor
*   it then returns control to the programmer to debug from that point forward
* Continue - a command that allows the program to continue running the program as normal, either until the program terminates, or until a trigger
*   triggers may be errors or breakpoints
* Start - a command that performs the same actions as 'continue', just starting from the beginning of the program
*   can only be invoked when no other debug actions are active
* Breakpoint - a special marker that tells the debugger to stop execution of the program at the breakpoint when running a debug command
*   breakpoints are the only command that will interrupt a 'start' command
*   have some advantages over 'run to cursor'...
*     a breakpoint will return control to the programmer as soon as an interruption occurs
*     a breakpoint can be set and it will persist until it is removed
*     a breakpoint is placed on a line, not in the execution path
* Set Next Statement - a command that allows the programmer to change the point of execution to some other statement
*   sometimes referred to as the 'jumping' command
*   can be used to jump forward over some code or jump backward to repeat the execution of some code
* WARNING: the 'set next' statement will change the point of execution, but not the program state
*   this command should be used with caution, especially when jumping backwards
*   DO NOT use this command to change the point of execution; it will likely crash the program  */

/*Lesson 3.8: Using an Integrated Debugger: Watching Variables
* Watching a Variable - the process of inspecting the value of a variable while the program is executing a debug command
*   most debuggers provide many ways to watch a variable
*   in most IDEs, a watch window will open
* a variable can usually be watched by executing the Watch or QuickWatch command and hovering the mouse over a variable
*   not particularly suitable for watching the change in a variable over a program's execution
* Watch Window - a window where you can add variables you would like to continually inspect
*   these variables will be updated as the program is stepped through
*   there are typically two ways to add variables to the watch window...
*     1. open the watch window and type in the variable name in the watch window
*     2. in the code window, right-click on the variable to watch and choose 'Add Watch' or 'Watch x'
* variables that go out of scope will typically stay in the watch window, but will be marked as 'not available'
*   if the variable returns to scope, the value will begin showing again
* using watches is the best way to watch the value of a variable change over time
* the watch window can also evaluate expressions
*   highlight an expression in the program, inspect the value of the expression by adding to the watch window
* WARNING: identifiers in watched expressions will evaluate to their current values, not what it will evaluate to
* TIP: some IDEs will offer an option to watch all local variables at once by clicking 'locals' */

/*Lesson 3.9: Using an Integrated Debugger: The Call Stack
* modern debuggers contain the call stack window
* Call Stack - a list of all active functions that have been called to get to the current point of execution
*   includes an entry for each function called, as well as which line of code will be returned to when the function returns
*   when a new function is called, it is added to the top of the call stack
* Call Stack Window - a debugger window that shows the current call stack state
* the call stack is useful in conjuction with breakpoints, so that the programmer may identify what function is being called at an interruption */

/*Lesson 3.10: Finding Issues Before They Become Problems
* the longer an error stays in the code, the harder it will be to find in the debugging process
* common ways to avoid creating errors...
*   > follow best practices
*   > don't program when tired
*   > understand where the common pitfalls are in a language
*   > keep your programs simple
*   > don't let your functions get too long or complex (functions 10 lines or less are generally good)
*   > prefer using the standard library to write code, when possible
*   > comment your code liberally
* as new capabilities are added to a program, the program may become harder to understand
* Refactoring - the process of making structural changes to a program without changing its behavior
* errors can also occur unexpectedly if a user uses an application in an unanticipated way
* Defensive Programming - a practice whereby the programmer tries to anticipate all of the ways the software could be misused
*   this is either by end-users or by other developers using the code
*   these misuses can often be detected and mitigated through defensive programming
* BEST PRACTICE: write the program a little at a time, run it, and debug it
* Unit Testing - a software testing method by which small units of source code are tested to determine if they are correct
*   constraint-based techniques involve the addition of some extra code to check that some set of assumptions are not violated
*     a common method incorporates the 'assert' and 'static_assert' commands
* Static Analysis Tools - programs that analyze your code to identify specific semantic issues
*   these tools are good at identifying where a piece of code does not follow best practices  */
//END OF CHAPTER 3 NOTES
//END OF LVL 1.2 NOTES
