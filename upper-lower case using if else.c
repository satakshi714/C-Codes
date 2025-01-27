# include <stdio.h>

int main() {
    char ch;
    printf("enter a character : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("lower case \n");
    }
    else if (ch >= 'A' && ch <= 'Z'){
        printf("uppercase \n");
    }
    else{
        printf("not a valid character \n");
    }
}