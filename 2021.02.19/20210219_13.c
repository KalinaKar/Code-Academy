/* Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник. */
#include <stdio.h>
#define BUFFSIZE 30
struct manager {
    int IDnum;
    char name[BUFFSIZE];
    char surname[BUFFSIZE];
    char lastName[BUFFSIZE];
    int experience;
    float salary;
};
struct employee {
    int IDnum;
    char name[BUFFSIZE];
    char surname[BUFFSIZE];
    char lastName[BUFFSIZE];
    char job[BUFFSIZE];
    int experience;
    float salary;
    struct manager id;
};

int main(void){
    struct manager boss;
    struct employee empl[10];

    printf("Enter manager ID number: ");
    scanf("%d", &boss.IDnum);    
    printf("Enter manager name: ");
    scanf("%s", &boss.name);
    printf("Enter manager surname: ");
    scanf("%s", &boss.surname);
    printf("Enter manager last name: ");
    scanf("%s", &boss.lastName);
    printf("Enter manager job experience in years: ");
    scanf("%d", &boss.experience);
    printf("Enter manager salary: ");
    scanf("%f", &boss.salary);

    int i;
    for (i = 0; i < 10; i++){
    printf("Enter employee%d ID number: ");
    scanf("%d", &empl[i].IDnum);    
    printf("Enter employee%d name: ");
    scanf("%s", &empl[i].name);
    printf("Enter employee%d surname: ");
    scanf("%s", &empl[i].surname);
    printf("Enter employee%d last name: ");
    scanf("%s", &empl[i].lastName);
    printf("Enter employee%d position: ");
    scanf("%s", &empl[i].lastName);
    printf("Enter employee%d job experience in years: ");
    scanf("%d", &empl[i].experience);
    printf("Enter employee%d salary: ");
    scanf("%f", &empl[i].salary);
    }
    return 0;
}