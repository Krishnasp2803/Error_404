#include<stdio.h>
struct Students{
    char name[20];
    char gender[10];
    int id;
    int age;
    float cgpa;
    float m1,m2,m3;
    float percent;
};
int user_choice();
void MainMenu();











































































































































































































void MainMenu()
{
    printf("\n\n======CLASS 12======");
    printf("\nEnter 1 For Add New Student");
    printf("\nEnter 2 For Search Student");
    printf("\nEnter 3 For Display All Students");
    printf("\nEnter 4 For Update Student");
    printf("\nEnter 5 For Delete Student");
    printf("\nEnter 6 For Marklist of Class");
    printf("\nEnter 0 to Exit");
    printf("\nEnter Choice Here :");
}
int user_choice()
{
    int choice;
    do
    {
        scanf("%d",&choice);
        if(choice>=0&&choice<=6)
        {
            break;
        }
        else
        {
            printf("\nPlease Enter Valid Choice\n");
        }
    }
}
