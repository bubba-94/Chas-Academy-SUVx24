#include <stdio.h>

int main()
{
    char openFile[200];
    FILE *fptr;
    fptr = fopen("my_file3.txt", "r");
    fgets(openFile,200,fptr);
    printf("%s %s", openFile);
    printf("\nGo check the contens of the file we've written to.\nWhen you're done, press the ENTER key in this termianl.");
    getchar();

        while(fgets(openFile, 200, fptr));
        {
            printf("\n%s", openFile);
        }
}