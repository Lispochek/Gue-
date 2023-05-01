#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char first[255], last[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first) - 1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
    printf("Hello, %s!\n", name);
=======
    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);
>>>>>>> d48ca41204158ddce496ca601fca242dfed90796
    return 0;
}
