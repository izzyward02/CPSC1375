//  VIA learncpp.com

// CHAPTER 0: INTRODUCTION TO C++

//a computer's CPU cannot comprehend C++
//  instead, it uses machine code/machine language
//  EXAMPLE: 10110000 0110001
// ASSEMBLY LANGUAGE: each instruction is identified by a short abbreviation
//  EXAMPLE: mov al, 061h
// HIGH LEVEL LANGUAGES: designed to allow the programmer to write instructions with less confusion
//  EXAMPLE: a = 97 (same instruction as mov al, 061h
//each new formal release of C++ is called a "language standard"/"language specification"

//USES OF C++...
//  video games
//  real-time systems
//  high-performance financial applications
//  graphical applications & simulations
//  productivity/office applications
//  embedded software
//  audio and video processing
//  artificial intelligence & neural networks

//C++ TROUBLESHOOTING PROCESS...
//  1. Define the problem
//  2. Design the solution
//  3. Write the program that implements the solution
//  4. Compile the program
//  5. Link the object files
//  6. Test the program
//  7. Debug (Repeat back to Step 4)

//WRITING A PROGRAM
//  - programs written are called "source code"
//  - chosen Integrated Development Environment (IDE) is called a "code editor"
//  - a typical code editor has two main features to make coding easier:
//    - line numbering
//    - syntax highlighting
// EXAMPLE:
#include <iostream>

int main()
{
    std:cout << "Colored text!";
    return 0;
}
//  - the C++ compiler checks the source code for errors and translates it into an "object file" to communicate to the computer
//      - C++ files should ALWAYS contain .cpp at the end
//  - to compile the program, press RUN, press F7, press Ctrl+F9, or press Ctrl+Shift+B (depends on IDE)

//DEBUG METHOD if program runs but console window closes...
// add these lines at the top of the program:
#include <iostream>
#include <limits>
// then add the following code at the end of main() function and before return():
std::cin.clear(); //resets any error flags
std::cin.ignore(std::numeric_limits<std:;streamsize>::max(), '\n'); //ignores characteristics in the input buffer
std::cin.get(); //gets one more char from the user (waits for user to press ENTER)
//alternative solution is the system("pause") command, but should be avoided on most OS
//NEED TO KNOW: C++ Language Standard Code Names...
//  c++1x = C++11   [ver. 11]
//  c++1y = C++14   [ver. 14]
//  c++1z = C++17   [ver. 17]
//  c++2a = C++20   [ver. 20]   <-- preferred language standard for C++
//  c++2b = C++23   [ver. 23]

//TESTING YOUR COMPILER FOR C++20 COMPATIBILITY...
//  after enabling the C++20 language standard, the following code should compile with no errors
#include <array>
#include <iostream>
#include <span>

struct Foo
{
    int a{};
    int b{};
    int c{};
}

consteval int sum(std::span<const int> a) //std::span and consteval
{
    int s{ 0 };
    for (auto n : a)
        s += n;
    return s;
}

auto sum(auto x, auto y) -> decltype(x + y) //abbreviated function templates
{
    return x + y;
}


int main()
{
    constexpr std::array a{ 3, 2, 1 };
    constexpr int s{ sum(a) };
    std::cout << s << '\n';
    
    Foo f1{ .a = 1, .c = 3 }; //designated initializers
    std::cout << sum(f1.a, f1.c) << '\n';
    
    return 0;
}

//  END OF INTRO NOTES

//  LESSON 4.1: INTRODUCTION TO FUNDAMENTAL DATA TYPES

//  Bits, bytes, and memory addressing...
//smallest unit of memory is a binary digit (also called a bit)
//  can hold a value of 0 or 1
//memory is organized into sequentail units called memory addresses
//  allows the user to find and access the contents of memory at a particular location
//  each bit does not get its own memory address since the number of addresses are limited
//  the need to access data bit-by-bit is rare and often unnecessary
//  each address holds 1 byte of data
//a byte is a group of bits that are operated as a unit
//  a modern standard is that a byte contains 8 sequential bits
//  in C++, data is usually in "byte-sized" chunks
//a data type tells a compiler how to interpret the contents of memory in a meaningful way
//  when an object is given a value, the compiler and CPU work to encode the value into the appropriate bit sequence for that data type
//  this data is then stored in memory
// EXAMPLE: bit sequence for integer 65 is 0100 0001

// Fundamental data types...
//C++ has an array of fundamental data types (often called "basic types", "primitive types", or "built-in types")
// COMMON DATA TYPES:
//    TYPE                  CATEGORY              MEANING
//    ----                  --------              -------
//    float                 Floating Point        a number with a
//    double                ""  ""                fractional part
//    long double           ""  ""
//    bool                  Integral (Boolean)    true or false
//    char                  Integral (Character)  a single character
//    wchat_t               ""  ""                of text
//    char8_t(C++20)        ""  ""
//    char16_t(C++11)       ""  ""
//    char32_t(C++11)       ""  ""
//    short                 Integral (Integer)    positive & negative
//    int                   ""  ""                whole numbers, 
//    long                  ""  ""                including 0
//    long long(C++11)      ""  ""
//    std::nullptr_t(C++11) Null Pointer          a null pointer
//    void                  Void                  no type

//C++ also supports a number of complex types (often called "compound types") which will be addressed in later notes
//the '_t' suffix means "type" and is a common nomenclature applied to modern data types, but isn't consistenty applied in C++

//END OF 4.1 NOTES

// LESSON 4.16: NUMERAL SYSTEMS (DECIMAL, BINARY, HEXADECIMAL, AND OCTAL)

//decimals are called "base 10" values, where each numerical digit can be a value 0-9 (10 possible values)
//  by default, C++ assumes numbers as decimal
// EXAMPLE:
int x { 12 }; // 12 is assumed to be a decimal number
//binary numbers can only be 0 or 1, thus called "base 2" values
//decimal and binary are two examples of numeral systems, meaning a collection of symbols or digits used to represent numbers
//  there are four main numeral systems available in C++...
//    - decimal (base 10)        - binary (base 2)  
//    - hexadecimal (base 16)    - octal (base 8)

// Octal Literals...
//octal is a base 8 system, having values 0-7
//  in octal, counting skips from 7 to 10, omitting 8 & 9
//      DECIMAL:  0  1  2  3  4  5  6  7  8   9   10  11
//      OCTAL:    0  1  2  3  4  5  6  7  10  11  12  13
//  to use an octal literal, prefix the literal with a 0
//EXAMPLE:
#include <iostream>

int main()
{
  int x{ 012 }; //0 before the number means this is an octal value
  std::cout << x << '\n';
  return 0;
}
// this program should print '10' since 12 octal = 10 decimal
// octal is often not used and should be avoided

// Hexadecimal Literals...
//hexadecimal is a base 16 system, having a value pattern of 9 digits, 5 letters
//  in hexadecimal, counting is as follows...
//      DECIMAL:  0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19...
//      HEX:      0 1 2 3 4 5 6 7 8 9  A  B  C  D  E  F 10 11 12 13...
//  to use a hexadecimal literal, prefix the literal with 0x
//EXAMPLE:
#include <iostream>

int main()
{
  int x{ 0xF }; //0x before the number means this is a hex value
  std::cout << x << '\n';
  return 0;
}
// this program should print '15' since F hexadecimal = 15 decimal
// FACT: a single hexadecimal digit encompasses 4 bits, so a pair of hexadecimal digits can represent a full byte
//   hexadecimal values are often used to represent memory addresses or raw data in memory whose type is unknown

//Binary Literals...
//  implementation of hexadecimal formatting makes the use of binary literals easier and less complicated
//   to use a binary literal, prefix the literal with 0b
//EXAMPLE:
#include <iostream>
int main()
{
  int bin{};  // assume 16-bit ints
  bin = 0b1;  // assign binary 0000 0000 0000 0001 to variable
  bin = 0b11; // assign binary 0000 0000 0000 0011 to variable
  bin = 0b1010; // assign binary 0000 0000 0000 1010 to variable
  bin = 0b11110000; // assign binary 0000 0000 1111 0000 to variable
  return 0;
}
// because longer literals can be hard to read, C++14 and later also has to ability to use a quotation mark (') as a digit separator
//EXAMPLE:
#include <iostream>

int main()
{
  int bin { 0b1011'0010 }; // assign binary 1011 0010 to variable
  long value { 2'132'673'462 }; // much easier to read
  return 0;
}
// note that the separator can't occur before the first digit

//Outputting Values in Decimal, Octal, or Hexadecimal...
//  by default, C++ outputs values in decimal, but the output format can be changed with the use of std::dec, std::oct, or std::hex as I/O manipulators
//EXAMPLE:
#include <iostream>

int main()
{
  int x { 12 };
  std::cout << x << '\n'; //decimal output (default)
  std::cout << std::hex << x << '\n'; // hexadecimal
  std::cout << x << '\n'; //output is now hex format
  std::cout << std::oct << x << '\n'; //octal
  std::cout << std::dec << x << '\n'; // return to decimal
  std::count << x << '\n'; // decimal

  return 0;
}
// this program should print "12 [enter] c [enter] c [enter] 14 [enter] 12 [enter] 12 [enter]"
//  note that once applied, the I/O manipulator remains set until changed again

//Outputting Values in Binary...
//  outputting binary values is more difficult as 'std::cout' doesn't have this capability
//  the C++ standard library includes the type 'std::bitset' to achieve this
//EXAMPLE:
#include <bitset> // for std::bitset
#include <iostream>

int main()
{
  // std::bitset<8> means to store 8 bits
  std::bitset<8> bin1{ 0b1100'0101 }; //binary literal for 1100 0101
  std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary value
  std::cout << bin1 << '\n' << bin2 << '\n';
  std::cout << std::bitset<4>{ 0b1010 } << '\n'; //creates a temporary std::bitset and prints it

  return 0;
}
// this program should print '11000101 [enter] 11000101 [enter] 1010 [enter]'

//END OF LVL 1.1 NOTES
