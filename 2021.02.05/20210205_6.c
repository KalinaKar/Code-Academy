/* Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите променливи i, j. */
#include <stdio.h>
void our_strcat(char *s, char *t);

int main(void){
    char s1[50] = "short "; /* change text here*/
    char s2[] = "snort"; /* change text here*/
    our_strcat(s1, s2);
    printf("%s\n", s1);
    return 0;
}

/* concatenate t to end of s; s must be big enough */
void our_strcat(char *s, char *t){
  while (*s) /* find end of s */
	  ++s;
  while ((*s++ = *t++)) /* copy t */
    ;
}