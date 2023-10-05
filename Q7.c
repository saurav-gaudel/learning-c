// WAP to check weather a character entered by user is Upper case or lower case.
// # include <stdio.h>
// int main(){
//     char ch;
//     printf ("enter a character");
//     scanf("%c", &ch);
//     if (ch>='a' && ch<='z')
//     {
//         printf("Lower case");
//     }
//     else if (ch>='A' && ch<='Z')
//     {
//         printf("Upper case");
//     } else {
//         printf("enter valid character");
//     }
    
// }
// to wtite alphabetes from a to z
# include<stdio.h>
int main() {
    for (char ch = 'a'; ch<='z'; ch = ch+1)
printf("%c \t",ch);    
}