#include<stdio.h>
void main() 
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
int main()
{
    struct Students students[50];
    int count = 0;
    int choice;
    while(1)
    {
        MainMenu();
        choice = user_choice();
        if(choice==0)
        {
            printf("\nThank You");
            break;
        }
        else if(choice==1)
        {
            printf("\n\n======Student Insertion Menu======\n");
            do{
                printf("Enter Student ID :");
                scanf("%d",&students[count].id);
                int ctr = 0;
                for(int i=0;i<count;i++)
                {
                    if(students[count].id==students[i].id)
                    {
                        ctr = 2;
                        break;
                    }
                }
                if(ctr==0)
                {
                    break;
                }
                else
                {
                    printf("ID Already Exists. Please Enter Different ID :\n");
                }
            }
            while(1);
            printf("Enter Student Name :");
            scanf(" %[^\n]",students[count].name);
            printf("Enter Student Gender :");
            scanf("%s",students[count].gender);
            printf("Enter Student Age :");
            scanf("%d",students[count].age);
            printf("Enter mark (on 100) for Maths,Physics and Chemistry :");
            scanf("%f%f%f",students[count].mark1,students[count].mark2,students[count].mark3);
            students[count].percent = (students[count].mark1+students[count].mark12students[count].mark3)/3;
            students[count].cgpa = students[count].percent/9.5;

            printf("\nStudent INfo Added Successfully!");
            printf("\nID           :%d",students[count].id);
            printf("\nName         :%d",students[count].name);
            printf("\nGender       :%d",students[count].gender);
            printf("\nAge          :%d",students[count].age);
            printf("\n\nMarks\n");
            printf("\nMaths\t\t\tPhysics\t\t\tChemistry\t\tPercentage\t\tCGPA\n");
            printf("%f\t\t%f\t\t%f\t\t%f\t\t%f\n",students[count].m1,students[count].m2,students[count].m3,students[count].percent,students[count].cgpa);
            count++;
        }


    }
}












































































































































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
