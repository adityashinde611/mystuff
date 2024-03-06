#include <stdio.h>

/*
    In programming, we may require some specific input data to be generated several numbers of times.
    Sometimes, it is not enough to only display the data on the console. The data to be displayed may
    be very large, and only a limited amount of data can be displayed on the console, and since the memory
    is volatile, it is impossible to recover the programmatically generated data again and again. However, 
    if we need to do so, we may store it onto the local file system which is nonvolatile and can be accessed every
    time. Here, comes the need of file handling in C.

    r	opens a text file in read mode
    w	opens a text file in write mode
    a	opens a text file in append mode
    r+	opens a text file in read and write mode
    w+	opens a text file in read and write mode
    a+	opens a text file in read and write mode
    rb	opens a binary file in read mode
    wb	opens a binary file in write mode
    ab	opens a binary file in append mode
    rb+	opens a binary file in read and write mode
    wb+	opens a binary file in read and write mode
    ab+	opens a binary file in read and write mode
*/
// int main(){
//     FILE *fp;
//     char ch;
//     fp = fopen("FileHandling.c","r");
//     while(1){
//         ch = fgetc(fp);
//         if(ch == EOF){
//             break;
//         }
//         printf("%c",ch);
//     }
//     fclose(fp);
//     return 0;
// }

/*
    The fprintf() function is used to write set of characters into file. It sends formatted output to a stream.

*/

// int main(){
//     FILE *fp;
//     fp = fopen("file.txt","w");
//     fprintf(fp,"Hello My name aditya");
//     fclose(fp);
//     return 0;
// }

/*
    The fscanf() function is used to read set of characters from file. It reads a word from the file and returns EOF at the end of file.
*/

// int main(){
//     FILE *fp;
//     char buff[255];
//     fp = fopen("file.txt","r");
//     while (fscanf(fp,"%s",buff) != EOF)
//     {
//         printf("%s ",buff);
//     }
//     fclose(fp);
//     return 0;
// }

int main(){
    FILE* fp;
    int id;
    char name[30];
    float salary;
    fp = fopen("file.txt","w+");
    if(fp == NULL){
        printf("File does not exist \n");
        return -1;
    }

    printf("Enter the id\n");
    scanf("%d",&id);
    fprintf(fp,"id = %d\n",id);
    printf("Enter the name \n");  
    scanf("%s", name);  
    fprintf(fp,"name = %s\n",name);
    return 0;
}