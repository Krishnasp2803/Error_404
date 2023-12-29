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
                    printf("ID Already Exists. Please Enter Different ID\n");
                }
            }
            while(1);
            printf("Enter Student Name :");
            scanf(" %[^\n]",students[count].name);
            printf("Enter Student Gender :");
            scanf("%s",students[count].gender);
            printf("Enter Student Age :");
            scanf("%d",&students[count].age);
            printf("Enter mark (on 100) for Maths,Physics and Chemistry :");
            scanf("%f%f%f",&students[count].m1,&students[count].m2,&students[count].m3);
            students[count].percent = (students[count].m1+students[count].m2+students[count].m3)/3;
            students[count].cgpa = students[count].percent/9.5;

            printf("\nStudent INfo Added Successfully!");
            printf("\nID           :%d",students[count].id);
            printf("\nName         :%s",students[count].name);
            printf("\nGender       :%s",students[count].gender);
            printf("\nAge          :%d",students[count].age);
            printf("\n\nMarks\n");
            printf("\nMaths\t\t\tPhysics\t\t\tChemistry\t\tPercentage\t\tCGPA\n");
            printf("%f\t\t%f\t\t%f\t\t%f\t\t%f\n",students[count].m1,students[count].m2,students[count].m3,students[count].percent,students[count].cgpa);
            count++;
        }
        else if(choice==2)
        {
            int s_id;
            printf("\n\n======(CLASS 12 Search Menu======");
            printf("\nEnter Student ID For Search :");
            scanf("%d",&s_id);
            int i=0;
            int s=-1;
            for(i=0;i<count;i++)
            {
                if(s_id==students[i].id)
                {
                    s=i;
                    break;
                }
            }
            if(s==-1)
            {
                printf("\n\n No Record Found !");
            }
            else
            {
                printf("\n=======Student Info======");
                printf("\nID            :%d",students[s].id);
                printf("\nName          :%s",students[s].name);
                printf("\nGender        :%s",students[s].gender);
                printf("\nAge           :%d",students[s].age);
                printf("\n\nMarks\n");
                printf("\nMaths\t\t\tPhysics\t\t\tChemistry\t\tPercentage\t\tCGPA\n");
                printf("%f\t\t%f\t\t%f\t\t%f\t\t%f\n",students[s].m1,students[s].m2,students[s].m3,students[s].percent,students[s].cgpa);
            }
        }
        else if(choice==3)
        {
            printf("\n\n======CLASS 12 Students List======\n");
            for(int i=0;i<count;i++)
            {
                printf("\nStudent %d\n",(i+1));
                printf("\nID            :%d",students[i].id);
                printf("\nName          :%s",students[i].name);
                printf("\nGender        :%s",students[i].gender);
                printf("\nAge           :%d",students[i].age);
                printf("\n\nMarks\n");
                printf("\nMaths\t\t\tPhysics\t\t\tChemistry\t\tPercentage\t\tCGPA\n");
                printf("%f\t\t%f\t\t%f\t\t%f\t\t%f\n",students[i].m1,students[i].m2,students[i].m3,students[i].percent,students[i].cgpa);
                for(int j=0;j<110;j++)
                {
                    printf("_");
                }

            }
        }
        else if(choice==4)
        {
            int s_id;
            printf("\n\n=======CLASS 12 Update Menu======= ");
            printf("\n Enter Student ID For Update :");
            scanf("%d",&s_id);
            int i=0;
            int s=-1;
            for(i=0;i<count;i++)
            {
                if(s_id==students[i].id)
                {
                    s=i;
                    break;
                }
            }
            if(s==-1)
            {
                printf("\n\n No Record Found !");
            }
            else
            {
                printf("Enter Student Name :");
                scanf(" %[^\n]",students[s].name);
                printf("Enter Student Gender :");
                scanf("%s",students[s].gender);
                printf("Enter Student Age :");
                scanf("%d",&students[s].age);
                printf("Enter mark(on 100) for Maths,Physics,Chemistry :");
                scanf("%f%f%f",&students[count].m1,&students[count].m2,&students[count].m3);
                students[count].percent = (students[count].m1+students[count].m2+students[count].m3)/3;
                students[count].cgpa = students[count].percent/9.5;


                printf("\nStudent Info ");
                printf("\nID             :%d",students[s].id);
                printf("\nName           :%s",students[s].name);
                printf("\nGender         :%s",students[s].gender);
                printf("\nAge            :%d",students[s].age);
                printf("\nMaths\t\t\tPhysics\t\t\tChemistry\t\tPercentage\t\tCGPA\n");
                printf("%f\t\t%f\t\t%f\t\t%f\t\t%f\n",students[s].m1,students[s].m2,students[s].m3,students[s].percent,students[s].cgpa);
            }
        }  
        else if(choice==5)
        {
            int s_id;
            printf("\n\n=========CLASS 12 Delete Menu==========");
            printf("\n Enter Student ID for Deletetion: ");
            scanf("%d",&s_id);
            int i=0;
            int s=-1;
            for(i=0;i<count;i++);
            {
                if(s_id==students[i].id);
                {
                    s=i;
                    break;
                }
            }
            if(s==-1)
            {
                printf("\n\n No Record Found !");
            }
            else
            {
                if(s==count)
                {
                    count--;
                }
                else if(count>0)
                {
                    students[s]=students[count-1];
                    count--;
                }
                printf("\n Student Deleted Succesfully !");
            }
        }
        else if(choice==6)
        {
            printf("====CLASS 12 MARK LIST=====");
            printf("\n\nNmae\t\t\tMaths\t\t\tPhysics\t\t\tChemistry\t\tPercentage\t\tCGPA\n");
            for(int i=0;i<130;i++)
            {
                printf("-");
            }
            for(int i=0;i<count;i++)
            {
                printf("\n%s\t\t%f\t\t%f\t\t%f\t\t%f\t\t%f\n",students[i].name,students[i].m1,students[i].m2,students[i].m3,students[i].percent,students[i].cgpa);
            }
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
    while(1);
    return choice;
}
