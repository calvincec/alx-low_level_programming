<h1> Low Level Programmimg (c) </h1>

These projects contains code solutions and responses to projects asigned at alx training program<br>
They are mainly for c language(low level programming language)<br>
They help me sharpen my coding skills. I have customised the README's to help me observe the following concepts while learning:
- The major concepts needed to learn in that in that topic
- DSA approaches in solving the problems
- The code organisation/stucture, ie betty

In the entire project, by mentioning DSA I mean using problem solving techniques in comming up with better algorithms hence optimised code. The repo will only feature the optimised codes. It is according to my view and experience

The following are major concepts explored in each folder

## 0x00-hello_world
Using common gcc flags especially the onces used to track compilation process, ```man gcc``` <br>
Using a bash variable to store/execute the above commands <br>
Write simple c codes that implement puts and printf functions <br>
There is no complex DSA knowledge used <br>

## 0x01-variables_if_else_while
Using c variables <br>
If control structure <br>
Operators(logical, arithmetic and Relational) in c and the while loop <br>
Using the ascii table, ```man ascii``` ie to explore the decimal notation of characters <br>
Notable DSA used here includes
- getting last digit of a given number
- Printing all possible combinations of one, two or three digit numbers using while loop

## 0x02-functions_nested_loops
Declaring and calling functions in c  <br>
Using functions prototypes ie, making one or many personalised functions in separate files. adding each function's prototype in main.h. importing main.h in other codes to use the personalised functions  <br>
Still uses ASCII table to check whether the given input is albhabetic or lower case  <br>
Notable DSA used here includes
- Printing multiplication table ie
  ```
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
  0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
  0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
  0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
  0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
  0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
  0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
  0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
  0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
  0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
  ```
- or even more
  ```
  0,   0,   0,   0
  0,   1,   2,   3
  0,   2,   4,   6
  0,   3,   6,   9

  0,   0,   0,   0,   0,   0
  0,   1,   2,   3,   4,   5
  0,   2,   4,   6,   8,  10
  0,   3,   6,   9,  12,  15
  0,   4,   8,  12,  16,  20
  0,   5,  10,  15,  20,  25
  
  
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
  0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
  0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
  0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
  0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
  0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
  0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
  0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
  0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
  0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
  0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
  0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
  0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
  ```
- A program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
- A program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
- Other advanced Fibonacci problems

## 0x03-debugging
More on identifying and removing bugs in a code
Notable DSA is 
- A program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.

## 0x04-more_functions_nested_loops
Declaring and calling functions in c  <br>
Using functions prototypes ie, making one or many personalised functions in separate files. adding each function's prototype in main.h. importing main.h in other codes to use the personalised functions  <br>
It is like task 0X02 But excusively explores the above concept <br>
No complex DSA<br>

## 0x05-pointers_arrays_strings
Introduction to pointers and arrays, memory management in c <br>
A function `void print_rev(char *s);` that PRINTS ONLY the string in reverse <br>
A function `void rev_string(char *s);` that REVERSES the given string <br>
A function `char *_strcpy(char *dest, char *src);` that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest

## 0x06-pointers_arrays_strings
A function `char *_strcat(char *dest, char *src);` that concantenates two srings <br>
Write a function `char *_strncpy(char *dest, char *src, int n);` that copies a string. <br>

## 0x07-pointers_arrays_strings
More Pointers and strings and arrays

A function `char *_memset(char *s, char b, unsigned int n);` that fills the first n bytes of the memory area pointed to by s with the constant byte b. Returns a pointer to the memory area s <br>
A function `char *_memcpy(char *dest, char *src, unsigned int n);` that  copies n bytes from memory area src to memory area dest. Returns a pointer to dest <br>
A function `char *_strchr(char *s, char c);` that Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found <br>
A function `unsigned int _strspn(char *s, char *accept);` that Returns the number of bytes in the initial segment of s which consist only of bytes from accept <br>
A function `char *_strpbrk(char *s, char *accept);` that  locates the first occurrence in the string s of any of the bytes in the string accept. Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found <br>
A function `char *_strstr(char *haystack, char *needle);` that finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared. Returns a pointer to the beginning of the located substring, or NULL if the substring is not found. <br>
A function `void print_chessboard(char (*a)[8]);` that prints the chessboard 
ie:
```
julien@ubuntu:~/0x07$ cat 7-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
julien@ubuntu:~/0x07$ ./7-print_chessboard 
rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR
julien@ubuntu:~/0x07$ 
```
A function `void print_diagsums(int *a, int size);` that prints the sum of the two diagonals of a square matrix of integers <br>
A function `void set_string(char **s, char *to);` that sets the value of a pointer to a char. <br>
A file `101-crackme_password` that contains the password for the [crackme2](https://github.com/alx-tools/0x06.c) executable.
- Your file should contain the exact password, no new line, no extra space
- ltrace, ldd, gdb and objdump can help
- You may need to install the openssl library to run the crakme2 program: sudo apt install libssl-dev
- Edit the source list sudo nano /etc/apt/sources.list to add the following line: deb http://security.ubuntu.com/ubuntu xenial-security main Then sudo apt update and sudo apt install libssl1.0.0

## 0x08-recursion
Standard functions like `puts` and other functions implemented using recursion

A function `void _puts_recursion(char *s);`  that prints a string, followed by a new line. Similar to the standard `puts` <br>
A function `void _print_rev_recursion(char *s);`  that prints a string in reverse. <br>
A function `int _strlen_recursion(char *s);`  that returns the length of a string. Like the standard `strlen` <br>
A function `int factorial(int n);` that returns the factorial of a given number. If n is lower than 0, the function should return -1 to indicate an error. Factorial of 0 is 1 <br>
A function `int _pow_recursion(int x, int y);` that returns the value of x raised to the power of y. If y is lower than 0, the function should return -1. Like the standard library `pow` <br>
A function `int _sqrt_recursion(int n);` that returns the natural square root of a number. If n does not have a natural square root, the function should return -1. like the standard `sqrt` <br>
A function `int is_prime_number(int n);`  that returns 1 if the input integer is a prime number, otherwise return 0. <br>
A function `int is_palindrome(char *s);` that returns 1 if a string is a palindrome and 0 if not.An empty string is a palindrome <br>
A function `int wildcmp(char *s1, char *s2);` that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0. s2 can contain the special character *. The special char * can replace any string (including an empty string) <br>

## 0x09-static_libraries


## 0x0A-argc_argv
- A function `int main(int argc, char **argv)` or `int main(int argc, char *argv[])`

- using `__attribute__((unused))`
- A function `int _atoi(char *s)` that converts string inputs to integers
- `int check_num(char *str)` to check for a number in a set of strings

## 0x0B-malloc_free
- a function `char *_strdup(char *str);` that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- A function `char *str_concat(char *s1, char *s2);` that concatenates 2 strings. <br>
The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated.
if NULL is passed, treat it as an empty string.
The function should return NULL on failure.

