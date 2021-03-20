#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int takeBit(int a, int i);
    /* returns bit on a certain position */

int nullBit(int num, int i);
    /* switch certain bit of an integer to 0 */

int upperBit(int num, int i);
    /* switch certain bit of an integer to 1 */

int switchBit(int num, int i);
    /* switch certain bit of an integer */

void bin(unsigned n);
    /* prints a binary number as string */

double sCircle(float r);
    /* return area of a circle */

double sEllipse(float a, float b);
    /* return area of ellipse */

void isEven(int a);
    /* prints if the number is odd or even */

long decToBin(int n);
    /* turns decimal to binary number */

int absVal(int num); 
    /* return absolute value of the number */

int power(int a); 
    /* return absolute value of 'a' to the second power */

int lcm(unsigned int a, unsigned int b);
    /* return the least common multiple of two positive integers */

float sqroot(int x);
    /* return the square root of a given number */

double my_atof(char *s);
    /* turns string into a float */

unsigned factLoop(unsigned num);
    /* returns factoriel of num */

void squeeze(char s[], char c);
    /* removes certain chars from a string */

int any(char s1[], char s2[]);

void lower(char s[]);
    /* turns upper case to lower case */

int linear_search(int *a, int n, int key);
    /* returns the position of a certain int in the array
        or returns -1 if the int is not present */

void my_swap(int *a, int *b);
    /* swaps values of *a and *b */

void printStr(char *s);
    /* print string char by char */

void my_strcpy(char *t, char *s);
    /* copy string t to string s */

int our_strcmp(char *s, char *t);
    /* compares two strings character by character */

void our_strcat(char *s, char *t);
  /* concatenate t to end of s; s must be big enough */ 

int my_strend(char *s, char *t);
    /* return 1 if string t is present at the end of string s */

int mystrlen(char *t);
    /* return length of a string */

int my_atoi(char *s);
    /* turn a string of numbers into an integer */

void my_itoa(int n, char *s);
    /* turn a number into a string */    

void reverse(char *s);
    /* reverse string */

void my_strncpy(char *s, char *t, int n);
    /* copy n number of characters from string s to string t */

char *strnCat(char *s, char *t, const size_t n);
    /* concatenate at most n characters of string t to string s, terminate
    * s with '\0'; return s */

int maxNum(int *arr, int len);
    /* return the largest number in an array */

void sort(int *a, int n);
    /* sorts an array of integers */

char *inputString();
    /* get string and return a pointer to it */
