/* Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BUFFSIZE 20
#define MIN_SALARY 1000
#define MAX_SALARY 5001
#define MIN_EXP 1
#define MAX_EXP 11
#define MAX_ID 100
struct manager {
    int IDnum;
    char *name;
    char *lastName;
};
struct employee {
    int IDnum;
    char *name;
    char *surname;
    char *lastName;
    char *job;
    int experience;
    float salary;
    struct manager boss;
};

struct employee makeEmpl(struct employee empl);
struct manager makeManager(struct manager boss);
void printEmpl(struct employee empl);

int main(void){
    srand((unsigned)time(0));
    struct employee e[10];
    int i;
    for (i = 0; i < 10; i++){
        e[i] = makeEmpl(e[i]);
        printf("Employee No.%d\n", i+1);
        printEmpl(e[i]);
    }
    return 0;
}

struct employee makeEmpl(struct employee empl){
    char *name[] = {"Ivan", "Peter", "Stoyan", "Georgy"};
    char *lastName[] = {"Ivanov", "Petrov", "Stoyanov", "Georgiev"};
    char *job[] = {"IT", "QA", "Junior", "Senior"};
    struct manager a;
    empl.IDnum = rand() % MAX_ID + 1;
    empl.name = name[rand() % 4];
    empl.surname = lastName[rand() % 4];
    empl.lastName = lastName[rand() % 4];
    empl.job = job[rand() % 4];
    empl.experience = rand() % MAX_EXP + MIN_EXP;
    empl.salary = rand() % 5000 + 1000;
    empl.boss = makeManager(a);
    return empl;
}

struct manager makeManager(struct manager boss){
    char *name[] = {"Maria", "Viktoria"};
    char *lastName[] = {"Stoyanova", "Vasileva"};
    boss.IDnum = rand() % MAX_ID;
    boss.name = name[rand() % 2];
    boss.lastName = lastName[rand() % 2];
    return boss;
}

void printEmpl(struct employee empl){
    printf("ID number: %d\n", empl.IDnum);
    printf("Name: %s\n", empl.name);
    printf("Surname: %s\n", empl.surname);
    printf("Last name: %s\n", empl.lastName);
    printf("Job: %s\n", empl.job);
    printf("Years of experience: %d\n", empl.experience);
    printf("Salary: %f\n", empl.salary);
    printf("Manager\nID number: %d\nName: %s\nLast name: %s\n", empl.boss.IDnum, empl.boss.name, empl.boss.lastName);
    printf("\n");
}
