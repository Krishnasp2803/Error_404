#include<stdio.h>
#include<string.h>
struct Book
{
  char author[50], title[50];
  int code;
};
FILE *library;
int maxbook = 10;
void addbook (struct Book books[], int *count);
void displaybook (struct Book books[], int count);
void issuebook (struct Book books[], int count);
void returnbook (struct Book books[], int count);
int
main ()
{
  struct Book books[10];
  int choice, count = 0;
  //displaying choice
  do
    {
      printf ("\n===Library Management System===\n");
      printf ("1. Add Book\n");
      printf ("2. Display Books\n");
      printf ("3. Search Book\n");
      printf ("4. Issue Book\n");
      printf ("5. Return Book\n");
      printf ("6. Exit\n");
      printf ("Enter your choice: ");
      scanf ("%d", &choice);
      printf("\n");
      switch (choice)
	{
	case 1:
	  addbook (books, &count);
	  break;
	case 2:
	  displaybook (books, count);
	  break;
	case 6:
	printf("Exiting the program");
	break;

	default:
	  printf ("Invalid choice.Enter a correct choice.");
	}
    }
  while (choice != 6);
  return 0;
}

//to Add books
void
addbook (struct Book books[], int *count)
{
  library = fopen ("Library.txt", "w+");
  int i, no;
  printf ("Enter the number of books you need to add: ");
  scanf ("%d", &no);
  for (i = 0; i < no; i++)
    {
      if (*count < maxbook)
	{
	  printf ("Enter the name of book %d: ", i + 1);
	  scanf (" %[^\n]", books[i].title);
	  printf ("Enter the name of the author: ");
	  scanf (" %[^\n]", books[i].author);
	  printf ("Enter the book code: ");
	  scanf ("%d", &books[i].code);
	  fprintf (library,"%s\t\t\t\t%s\t\t\t%d\n",books[i].title,books[i].author,books[i].code);
	  (*count)++;
	  printf ("Book added successfully!\n");
	}
      else
	{
	  printf
	    ("Maximum number of books reached. Cannot add more books.\n");
	}
    }
    fclose(library);
}
//to DISPLAY ALL BOOKS
void displaybook (struct Book books[], int count)
{
  library = fopen ("Library.txt", "r");
  char ch;
  printf("Books available in the library:\n");
  printf("**********************************************************************");
  printf("TILE\t\t\t\t\tAUTHOR\t\t\t\tCODE\n");
  while (feof (library) == 0)
    {
      ch = fgetc (library);
      printf ("%c", ch);
    }
    fclose(library);
}
/*void issuebook (struct Book books[], int count)
{
    
}*/
