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
    FILE *fp = fopen("CLASS_12","ab+");
    int count;
    int choice;
    int n;
    while(1)
    {
        
        MainMenu();
        choice = user_choice();
        if(choice==0)
        { 
            fclose(fp);
            printf("\nThank You\n");
            break;
        }
        else if(choice==1)
        {
            struct Students newstudents;
            printf("\n\n======Student Insertion Menu======\n");
            printf("Enter the number of students you want to add: ");
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
            //do{
                printf("\n\nEnter Student ID :");
                scanf("%d",&newstudents.id);
                /*int ctr = 0;
                for(int i=0;i<count;i++)
                {
                    if(newstudents.id==students.id)
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
            while(1);*/
            printf("Enter Student Name :");
            scanf(" %[^\n]",newstudents.name);
            printf("Enter Student Gender :");
            scanf("%s",newstudents.gender);
            printf("Enter Student Age :");
            scanf("%d",&newstudents.age);
            printf("Enter mark (on 100) for Maths,Physics and Chemistry :");
            scanf("%f%f%f",&newstudents.m1,&newstudents.m2,&newstudents.m3);
            newstudents.percent = (newstudents.m1+newstudents.m2+newstudents.m3)/3;
            newstudents.cgpa = newstudents.percent/9.5;
            fwrite(&newstudents, sizeof(struct Students), 1, fp);

            printf("\nStudent INfo Added Successfully!");
            count++;
            }
            /*fp = fopen("CLASS_12","w");
            for (int i = 0; i <count; i++) 
            {
              fprintf(fp,"%d %s %s %d %f %f %f %f %f", students[i].id, students[i].name, students[i].gender, students[i].age, students[i].m1, students[i].m2, students[i].m3, students[i].percent, students[i].cgpa);

            }
            
            fclose(fp);*/
            printf("Record Stored!");
            
        }
        /*else if(choice==2)
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
        }*/
        
        
        else if(choice==3)
        {
            struct Students students;
            rewind(fp);

            while(fread(&students, sizeof(struct Students), 1, fp)==1)
            {
                printf("\nID           :%d",students.id);
                printf("\nName         :%s",students.name);
                printf("\nGender       :%s",students.gender);
                printf("\nAge          :%d",students.age);
                printf("\n\nMarks\n");
                printf("\nMaths\t\t\tPhysics\t\t\tChemistry\t\tPercentage\t\tCGPA\n");
                printf("%f\t\t%f\t\t%f\t\t%f\t\t%f\n",students.m1,students.m2,students.m3,students.percent,students.cgpa);
                for(int j=0;j<110;j++)
                {
                    printf("_");
                }
            }
            //fclose(fp);
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
