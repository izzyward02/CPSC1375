// VIA learncpp.com

/*CHAPTER 4: FUNDAMENTAL DATA TYPES
* Bit - (binary digit) the smallest unit of memory in a program
* Byte - the smallest unit of amount of memory that can be addressed directly
*   the modern standard is that 1 byte = 8 bits
* C++ comes with support for many fundamental data types, including floating point numbers, integers, boolean, char, null pointers, and void
* Void - used to indicate no type
*   primarily used to indicate that a function does not return a value
* different types take different amounts of memory & amount of memory used may vary by machine
*   minimum size for each fundamental type...
*     CATEGORY        TYPE            MIN. SIZE     TYPICAL SIZE 
*     --------        ----            ---------     ------------
*     boolean         bool              1 byte         1 byte
*     character       char              1 byte         1 byte
*                     wchar_t           1 byte       2 or 4 bytes
*                     char8_t           1 byte         1 byte
*                     char16_t          2 bytes        2 bytes
*                     char32_t          4 bytes        4 bytes
*     integer         short             2 bytes        2 bytes
*                     int               2 bytes        4 bytes
*                     long              4 bytes      4 or 8 bytes
*                     long long         8 bytes        8 bytes
*     floating point  float             4 bytes        4 bytes
*                     double            8 bytes        8 bytes
*                     long double       8 bytes   8, 12, or 16 bytes
*     pointer         std::nullptr_t    4 bytes      4 or 8 bytes

* 'sizeof' operator can be used to return the size of a type in bytes
* Signed Integers - used for holding positive and negative whole numbers, including 0
* Range - the set of values that a specific data type can hold
*   when using integers, watch for overflow and int division problems
* Unsigned Integers - holds only positive numbers (and 0)
*   should generally be avoided unless executing bit-level manipulation
* Fixed-Width Integers - integers with guaranteed sizes
*   may not exist on all architectures
*   fast and least integers are fast and smallest integers that are at least some size
* WARNING: using 'std::int8_t' and 'std::uint8_t' should generally be avoided, as it may act like a char instead of an int
* 'size_t' is an unsigned integral type that is used to represent the size or length of objects
* Scientific Notation - a shorthand way of writing very large numbers
*   C++ supports scientific notation in conjunction with floating point numbers
*   the digits in the significand are called the 'significant digits'
* Floating Point - a set of types designed to hold real numbers (including those with a fractional component)
* Precision - defines now many significant digits a number can represent without losing information
* Rounding Error - occurs when too many significant digits are stored in a floating point number that can't hold that much precision
*   these errors are common, so floating point numbers should not be compared directly
* Boolean - a type used to store true or false values
* 'if' statements allow the programmer to execute one or more lines of code if some situation is true
*   the conditional expression of an 'if' statement is interpreted as a boolean value
* 'char' is used to store values that are interpretted as an ASCII character
* WARNING: when using chars, be careful not to mix up ASCII code values and numbers
*   printing a char as an int value requires using 'static_cast'
* angled brackets in C++ are typically used to represent something that needs a parameterizable type
*   used with 'static_cast' to determine what data type the argument should be converted to
*   (i.e., 'static_cast<int>(x)' will convert 'x' to an integer
* Constant - a value that may not be changed
*   C++ supports two types of constants: const variables and literals
*   a const variable is a variable whose value cannot be changed
*   a literal is a value inserted directly into the code
*     literals have types & literal suffixes can be used to change the type of a literal from its default
* Symbolic Constant - a name given to a constant value
*   const variables are one type of symbolic constant, as are object-like macros with substitution text
* Constant Expression - an expression that can be evaluated at compile-time
* Compile-Time Constant - a constant whose value is known at compile-time
*   a 'constexpr' variable MUST be a compile-time constant
* Runtime Constant - a constant whose initialization value isn't known until runtime
* Magic Number - a literal (usually a number) that either has an unclear meaning or may need to be changed later
*   DO NOT use magic numbers in a program; use symbolic constants instead
* decimal numbers (base 10) have ten digits (0-9)
* computers use binary (base 2) which only has two digits (0 and 1)
* C++ also supports octal (base 8) and hexadecimal (base 16)
* Numeral Systems - collections of symbols (digits) used to represent numbers
* String - a collection of sequential characters used to represent text
*   string literals are ALWAYS placed between double quotes ""
*   string literals in C++ are C-style strings, which have a type that is hard to work with
*   'std::string' offers an easy way to incorporate string literals
*   'std::string_view' provides a read-only access to an existing string without making a copy  */

//EXAMPLE QUESTIONS...

// Q1
// Why are symbolic constants usually a better choice than literal constants?
// Why are const/constexpr symbolic constants usually a better choice than #define symbolic constants?

// Using literal constants (a.k.a. magic numbers) in your program makes your program harder to understand or modify.
// Symbolic constants help document what the numbers actualy represent, and
// Changing a symbolic constant at its declaration changes the value everywhere it is used.
// #define constants do not show up in the debugger and are more likely to have naming conflicts.

// Q2
// Pick the appropriate data type for a variable in each of the following situations.
// Be as specific as possible. If the answer is an int, choose int. or a specific fixed-width int type based on range

//  a) The age of the user (in years)     ANSWER: int
//  b) Whether the user wants the application to check for updates      ANSWER: bool
//  c) pi(3.14159265)     ANSWER: constexpr double
//  d) The number of pages in a textbook      ANSWER: int
//  e) The length of a couch in feet, to 2 decimal places     ANSWER: float
//  f) How many times you've blinked since you were born      ANSWER: std::int32_t
//  g) A user selecting an option from a menu by letter     ANSWER: char
//  h) The year someone was born      ANSWER: std::int16_t (pos. nums can be used to represent AD dates, and neg. nums to represent BC dates)

// Q3
// Write the following program...
//    The user is asked to enter 2 floating point numbers (use doubles)
//    The user is then asked to enter one of the following mathematical symbols: +, -, *, or /
//    The program computes the answer on the two numbers the user entered and prints the results
//    If the user enters an invalid symbol, the program should print nothing

#include <iostream>

double getDouble()
{
  std::cout << "Enter a double value: ";
  double x{};
  std::cin >> x;
  return x;
}

char getOperator()
{
  std::cout << "Enter one of the following: +, -, *, or /";
  char operation{};
  std::cin >> operation;
  return operation;
}

void printResult(double x, char operation, double y)
{
  if (operation == '+')
    std::cout << x << " + " << y << " is " << x + y << '\n';
  else if (operation == '-')
    std::cout << x << " - " << y << " is " << x - y << '\n';
  else if (operation == '*')
    std::cout << x << " * " << y << " is " << x * y << '\n';
  else if (operation == '/')
    std::cout << x << " / " << y << " is " << x / y << '\n';
}

int main()
{
  double x { getDouble() };
  double y { getDouble() };
  
  char operation { getOperation() };
  printResult(x, operation, y);
  return 0;
}

// Q4
// Write a short program to simulate a ball being dropped off of a tower.
//    To start, the user should be asked for the height of the tower in meters
//    Assume normal gravity (9.8 m/s^2) and that the ball has no initial velocity
//    Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds
//    The ball should not go underneath the ground (below height of 0)
//    Use a function to calculate the height of the ball after 'x' seconds
//    The function can calculate how far the ball has fallen after 'x' seconds using the following formula:
//      distance fallen = gravity_constant * x_seconds^2 / 2
// NOTE: depending on the height of the tower, the ball may not reach the ground in 5 seconds, which is fine in this case
//        the '^' symbol isn't an exponent in C++; instead use '**' for double multiplication
//        remember to use double literals for doubles

#include <iostream>

//gets height from user and returns it
double getTowerHeight()
{
  std::cout << "Enter the height if the tower in meters: ";
  double towerHeight{};
  std::cin >> towerHeight;
  return towerHeight;
}

//Returns height from ground after 'seconds' seconds
double calculateHeight(double towerHeight, int seconds)
{
  constexpr double gravity( 9.8 );
  //use formula [ s = u * t + (a * t^2) / 2 ] and u(initial velocity) = 0
  const double distanceFallen{ (gravity * (seconds * seconds)) / 2.0 };
  const double currentHeight{ towerHeight - distanceFallen };
  return currentHeight;
}

//Prints height every second till ball has reached the ground
void printHeight(double height, int seconds)
{
  if (height > 0.0)
    std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
  else
    std::cout << "At " << seconds << " seconds, the ball is on the ground. \n";
}

void calculateAndPrintHeight(double towerHeight, int seconds)
{
  const double height{ calculateHeight(towerHeight, seconds) };
  printHeight(height, seconds);
}

int main()
{
  const double towerHeight{ getTowerHeight() };
  
  calculateAndPrintHeight(towerHeight, 0);
  calculateAndPrintHeight(towerHeight, 1);
  calculateAndPrintHeight(towerHeight, 2);
  calculateAndPrintHeight(towerHeight, 3);
  calculateAndPrintHeight(towerHeight, 4);
  calculateAndPrintHeight(towerHeight, 5);
  
  return 0;
}

// Q5
// Find three issues (affecting 4 lines) in the following code...
#include <cstdint> //for std::uint8_t
#include <iostream>

int main()
{
  std::cout << "How old are you?\n";
  
  std::uint8_t age{};
  std::cin >> age;
  
  std::cout << "Allowed to drive a car in Texas [";
  
  if (age >= 16)
    std::cout << "x";
  else
    std::cout << " ";
  
  std::cout << "]\n";
  
  return 0;
}
// Issue 1. There is no reason to use 'std::uint8_t' in Line 8. Header #include <cstdint> should be removed.
// Issue 2. Characters should be placed in single quotation marks, not full quotations (Lines 14, 16)
// Issue 3. Although the meaning of 16 is clear from the context it is used, 16 can be seen as a magic number.
//          Per best practice, a constexpr variable with the value of 16 should be defined and used instead.
//END OF CHAPTER 4 NOTES:

//CHAPTER 5: OPERATORS
/* 

//END OF CHAPTER 5 NOTES:

//LESSON 6.1:

//LESSON 6.2:

//LESSON 6.3:

//LESSON 6.4:

//LESSON 6.5:

//LESSON 6.6:

//LESSON 6.7:

//LESSON 6.8:

//LESSON 6.9:

//LESSON 6.10:

//LESSON 6.11:

//END OF LVL 2.1 NOTES
