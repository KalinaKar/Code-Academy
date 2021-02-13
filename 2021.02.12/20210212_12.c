/* Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inputString(size_t size);

int main(void)
{
    char *m;
    int participants;
    printf("How many participants? ");
    scanf("%d", &participants);

    char nl = getchar();

    char *pointArr[participants * 4];
    int pCoun = 0;
    for (size_t i = 0; i < participants; i++)
    {
        char *fname;
        printf("Enter participant No:%i first name:\n", i + 1);
        fname = inputString(10);

        char *lname;
        printf("Enter participant No:%i last name:\n", i + 1);
        lname = inputString(10);

        char *age;
        printf("Enter participant No:%i age:\n", i + 1);
        age = inputString(10);

        char *serial;
        printf("Enter participant No:%i serialNo:\n", i + 1);
        serial = inputString(10);

        pointArr[pCoun] = fname;
        pointArr[pCoun + 1] = lname;
        pointArr[pCoun + 2] = age;
        pointArr[pCoun + 3] = serial;

        pCoun += 4;
    }

    for (size_t i = 0; i <= participants * 4; i += 4)
    {
        for (size_t j = i + 4; j <= (participants * 4) - 1; j += 4)
        {
            if (strcmp(pointArr[i], pointArr[j]) > 0)
            {
                char *tmpFirst;
                char *tmpLast;
                char *tmpAge;
                char *tmpSerialNo;

                tmpFirst = pointArr[i];
                pointArr[i] = pointArr[j];
                pointArr[j] = tmpFirst;

                tmpLast = pointArr[i + 1];
                pointArr[i + 1] = pointArr[j + 1];
                pointArr[j + 1] = tmpLast;

                tmpAge = pointArr[i + 2];
                pointArr[i + 2] = pointArr[j + 2];
                pointArr[j + 2] = tmpAge;

                tmpSerialNo = pointArr[i + 3];
                pointArr[i + 3] = pointArr[j + 3];
                pointArr[j + 3] = tmpSerialNo;
            }
        }
    }

    for (size_t i = 0; i < pCoun; i += 4)
    {
        printf("Participant: %s %s, age: %s, serial number: %s. \n", pointArr[i], pointArr[i + 1], pointArr[i + 2], pointArr[i + 3]);
        free(pointArr[i]);
        free(pointArr[i + 1]);
        free(pointArr[i + 2]);
        free(pointArr[i + 3]);
    }

    return 0;
}

char *inputString(size_t size)
{
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(*str) * size);
    if (!str)
        return str;
    while (EOF != (ch = getchar()) && ch != '\n')
    {
        str[len++] = ch;
        if (len == size)
        {
            str = realloc(str, sizeof(*str) * (size += 16));
            if (!str)
                return str;
        }
    }
    str[len++] = '\0';

    return realloc(str, sizeof(*str) * len);
}