#include<stdio.h>
#include<string.h>
struct books{
    int bookId;
    char bookName[100];
    char authorName[100];
    char date[12];
};
struct student{
    int id;
    char stuName[50];
    char stuClass[50];
    int stuRoll;
    char bookName[100];
    char date[12];
};
FILE *library;
struct books addlist[100];
void issueBook(int bookCount)
{
struct books issue[100];
int i=0,max_Books=4;
for(i=0;i<bookCount;i++)
{
    while(bookCount<max_Books)
    {
        printf("\nEnter Book Details:\n");
        printf("Book ID:");
        scanf("%d",&issue[i].bookId);
        printf("Book Name:");
        scanf("%s",issue[i].bookName);
        printf("Author Name:");
        scanf("%s",issue[i].authorName);
        bookCount++;
        printf("Book Issued Successfully \n");
    }
}
}
 void AddBook()
 {
            library=fopen("library.txt","a+");
            int n,i=0;
            printf("Enter Number Of Books Do You Want To Add");
            scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        printf("\nEnter Book Details:\n\t");
        printf("Book ID:");
        scanf("%d",&addlist[i].bookId);
        printf("Book Name:");
        scanf("%s",addlist[i].bookName);
        printf("Author Name:");
        scanf("%s",addlist[i].authorName);
        fprintf(library,"%d\t%s\t%s\n",addlist[i].bookId,addlist[i].bookName,addlist[i].authorName);
        printf("Book Added Successfully \n");
         }
         fclose(library);
 }
void main(){
    int ch,no;
        printf("====Library Management System Menu====\n");
        printf("1 : Add Book\n");
        printf("2 : Books List\n");
        printf("3 : Issue Book\n");
        printf("4 : Return Book\n");
        printf("0 :Exit\n");
        printf("Enter your choice... ");
        scanf("%d",&ch);
switch(ch)
        {
            case 1:
             printf("Add Book");
             AddBook();
            break;
            
            case 2:
            printf("Books List");
            break;
            
            case 3:
            printf("Issue Book");
            printf("how many books do you want to issue");
            scanf("%d",&no);
            issueBook(no);
            break;
            
            case 4:
            printf("Return Book");
            break;
            
            case 5:
            printf("IssueList");
            break;
            
            default:
            printf("Invalid Choice...\n\n");
            printf("PRESS Valid Key To Continue..");
        }
       
       
}

