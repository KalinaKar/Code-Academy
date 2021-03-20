#include "myFunc.h"
const double gPI = 3.14159;

int takeBit(int a, int i) {
    /* returns bit on a certain position */
    int h = 1;
    a = a>>i;
    a = a & h;
    return a;
}

int nullBit(int num, int i) {
    /* switch certain bit of an integer to 0 */
    int mask = 1<<i;
    mask = ~ mask;
    num = num & mask;    
    return num;
}

int upperBit(int num, int i) {
    /* switch certain bit of an integer to 1 */
    int mask = 1<<i;
    num = num|mask;    
    return num;
}

int switchBit(int num, int i) {
    /* switch certain bit of an integer */
    int mask = 1<<i;
    num = num^mask;
    return num;
}

void bin(unsigned n){
    /* prints a binary number as string */
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >>1)
        (n & i)? printf("1"): printf("0");
        printf("\n");

}

double sCircle(float r){
    /* return area of a circle */
    double sC = r * r * gPI;
    return sC;
}

double sEllipse(float a, float b){
    /* return area of ellipse */
    double sE = a * b * gPI;
    return sE;
}

void isEven(int a){
    /* prints if the number is odd or even */
    if (a % 2 == 0)
        printf("The number is even.");
    else
        printf("The number is odd.");    
}

long decToBin(int n){
    /* turns decimal to binary number */
    long binarynum = 0;
    int rem, temp = 1;

    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        binarynum = binarynum + rem * temp;
        temp = temp * 10;
    }
    return binarynum;
}

int absVal(int num){ 
    /* return absolute value of the number */
    if (num < 0){
        num = ~num;
        num++;
    }
    return num;
}

int power(int a){ 
    /* return absolute value of 'a' to the second power */
    a = absVal(a);
    return a * a;
}

int lcm(unsigned int a, unsigned int b){
    /* return the least common multiple of two positive integers */
    int gcd, lcm;
    /*first we determine the greatest common divisor*/  
    for(int i=1; i<=a && i<=b; i++){ 
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    /*then we determine the least common multiple by formula*/
    return lcm = (a*b)/gcd;
}

float sqroot(int x){
    /* return the square root of a given number */
    if (x < 0)
        x = absVal(x);

    /*god bless google here*/
    int start = 0, end = x;
    int mid;
 
    /*To store the answer*/
    float ans;
 
    /*To find integral part of square root of number*/
    while (start <= end) {
 
        /*Find mid*/
        mid = (start + end) / 2;
 
        /*If number is perfect square then break*/
        if (mid * mid == x) {
            ans = mid;
            break;
        }
 
        /*Increment start if integral part lies on right side of the mid*/
        if (mid * mid < x) {
            start = mid + 1;
            ans = mid;
        }
 
        /*Decrement end if integral part lies on the left side of the mid*/
        else {
            end = mid - 1;
        }
    }
 
    /*To find the fractional part of square root upto 5 decimal*/
    float increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= x) {
            ans += increment;
        }
 
        /*Loop terminates, when ans * ans > number*/
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}

double my_atof(char *s){
    /* turns string into a float */
    int i = 0;
    double left = 0, right = 0, power = 1;
    /* this loop iterates through the left side of the floating point */
    while (s[i] >= '0' && s[i] <= '9')
        left = 10 * left + (s[i++] - '0');
    
    /* this loop iterates through the right side of the floating point */
    i++;/* to skip the floating point*/
    while (s[i] >= '0' && s[i] <= '9'){
        right = 10 * right + (s[i++] - '0');
        power *= 0.1;
    }
    
    return left + (right * power);
}

unsigned factLoop(unsigned num){
    /* returns factoriel of num */
    unsigned result = 1;
    for ( ; num >= 2; num--)
        result *= num;
    return result;
}

void squeeze(char s[], char c){
    /* removes certain chars from a string */
    int i, j = 0;
    for (i = 0; i < strlen(s); i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
    printf("%s", s);
}

int any(char s1[], char s2[]){
    int is, iss, flag = 0;
    for (iss = 0; iss < strlen(s2); iss++){
        if(flag)
            break;
        
        is = 0;
        for (is = 0; is < strlen(s1); is++)
            if (s1[is] == s2[iss]){
                flag = 1;
                break;
            }
    }
    return is;
}

void lower(char s[]){
    /* turns upper case to lower case */
    int i;
    for (i = 0; i < strlen(s); i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32; 
    }
    printf("%s\n", s);
}

int linear_search(int *a, int n, int key){
    /* returns the position of a certain int in the array
        or returns -1 if the int is not present */
    int *p = a + n;
    while (a <= p){
        if (*a == key)
            return a - (p - n);
        a++;
    }
    return 0;
}

void my_swap(int *a, int *b){
    /* swaps values of *a and *b */
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void printStr(char *s){
    /* print string char by char */
    char c;
    for ( ; (c = *s) != '\0'; s++)
        printf("%c", c);
}

void my_strcpy(char *t, char *s){
    /* copy string t to string s */
    for(; *t; *t++, *s++)
        *s = *t;
}

int our_strcmp(char *s, char *t){
    /* compares two strings character by character */
    for ( ; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;
    return *s - *t;
}

void our_strcat(char *s, char *t){
  /* concatenate t to end of s; s must be big enough */  
  while (*s) /* find end of s */
	  ++s;
  while ((*s++ = *t++)) /* copy t */
    ;
}

int mystrlen(char *t){
    /* return length of a string */
    char *p;
    p=t;

    while(*p!='\0')
        ++p;

    return p-t;
}

int my_strend(char *s, char *t){
    /* return 1 if string t is present at the end of string s */
    int len;
    len=mystrlen(t);
    while(*s!='\0')
        ++s;
    --s;

    while(*t!='\0')
        ++t;
            
    --t;
    while(len > 0)    {
        if(*t==*s)        {
            --t;
            --s;
            --len;
        }
        else
            return 0;
    }
    if( len == 0)
        return 1;
}

int my_atoi(char *s){
    /* turn a string of numbers into an integer */
    int rez=0;
    while(*s!='\0'){
        rez*=10;
        rez+=(*s-'0');
        *s++;
    }
    return rez;
}

void my_itoa(int n, char *s){
    /* turn a number into a string */
    do{
        *s=(n%10)+'0';
        n/=10;
        *s++;
    }while(n>0);
}

void reverse(char *s){
    /* reverse string */
    char *p, *q, tmp;
    q = s + strlen(s) - 1;
    for (p = s; p < q; ++p, --q) {
        tmp = *p;
        *p = *q;
        *q = tmp;
    }
}

void my_strncpy(char *s, char *t, int n){
    /* copy n number of characters from string s to string t */
    while(n>0){
        *s=*t;
        *s++,*t++,n--;
    }
}

char *strnCat(char *s, char *t, const size_t n){
    /* concatenate at most n characters of string t to string s, terminate
    * s with '\0'; return s */    
	size_t i, s_len, t_len, lim;

	s += (s_len = strlen(s)); /* advance pointer */
	lim = (n > (t_len = strlen(t))) ? t_len : n; /* scale down n */
	for (i = 0; i < lim && (*s++ = *t++); ++i)
		;
	*s = '\0';
	return s - s_len - i;
}

int maxNum(int *arr, int len){
    /* return the largest number in an array */
    int i;
    int largest = arr[0];
    for (i = 0; i < len; i++){
        if (largest < arr[i])
            largest = arr[i];
    }
    return largest;
}

void sort(int *a, int n){
    /* sorts an array of integers */
    int *ip = a + n;
    while (a < ip)
    {
        int *temp = a + 1;
        while (temp <= ip)
        {
            if (*temp > *a)
            {
                *a = *temp + *a;
                *temp = *a - *temp;
                *a = *a - *temp;
            }
            temp++;
        }
        a++;
    }
}

char *inputString(){
    /* get string and return a pointer to it */
    char *buffer = NULL;
    int size = 2;
    buffer = (char*)malloc(size * sizeof(char));
    char *copy = buffer;
    char c;
    int i = 0;
    while ((c = getchar()) != '\n'){
        if (i == size - 1){
            size += 2;
            buffer = realloc(buffer, size * sizeof(char));
            if (NULL == buffer){
                printf("Reallocation memory error!\n");
                return 0;
            }
        }
        buffer[i++] = c;
    }
    buffer[i] = '\0';
    return copy;
}