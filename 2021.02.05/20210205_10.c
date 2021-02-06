/* Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s. */
#include <stdio.h>
#include <string.h>
char *strnCat(char *, char *, const size_t);

int main(){
    char s1[] = "Summer in the city ";
    char s2[] = "In the city";
    strncat(s1, s2 ,5);
    printf("%s\n", s1);
    return 0;
}

/* strnCat: concatenate at most n characters of string t to string s, terminate
 * s with '\0'; return s */
char *strnCat(char *s, char *t, const size_t n)
{
	size_t i, s_len, t_len, lim;

	s += (s_len = strlen(s)); /* advance pointer */
	lim = (n > (t_len = strlen(t))) ? t_len : n; /* scale down n */
	for (i = 0; i < lim && (*s++ = *t++); ++i)
		;
	*s = '\0';
	return s - s_len - i;
}