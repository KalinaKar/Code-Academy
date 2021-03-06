/* Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */
#include  <stdio.h>
#include <stdlib.h>

typedef struct participant{
    int number;
    int age;
    char *name;
    char *surname;
} t_part;

char *inputString();
void getInfo();
void printInfo(int n, t_part array[n]);

int main(void){

    getInfo();

    return 0;
}

char *inputString(){
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
                exit(2);
            }
        }
        buffer[i++] = c;
    }
    buffer[i] = '\0';
    return copy;
}

void getInfo(){
    printf("Enter number of participants:\n");
    int n, i;
    scanf("%d", &n);
    char nl = getchar();
    t_part runner[n];

    for (i = 0; i < n; i++){
        printf("Enter participant %d first name:\n", i + 1);
        runner[i].name = inputString();

        printf("Enter participant %d last name:\n", i + 1);
        runner[i].surname = inputString();

        printf("Enter participant %d age:\n", i + 1);
        scanf("%d", &runner[i].age);

        printf("Enter participant %d running number:\n", i + 1);
            scanf("%d", &runner[i].number);
        nl = getchar();
    }
    printInfo(n, runner);

}

void printInfo(int n, t_part array[n]){
    int i;
    for (i = 0; i < n; i++){
        printf("\nParticipant %d:\nName: %s\nSurname: %s\nAge: %d\nRunning number: %d\n",
        i+1, array[i].name, array[i].surname, array[i].age, array[i].number);
        free(array[i].name);
        free(array[i].surname);
    }
}