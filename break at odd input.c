# include <stdio.h>

int main() {
    
    int n;
    do{
        printf("enter n : ");
        scanf("%d",n);
        printf(" entered number : %d\n",&n);

        if(n % 2 != 0){
            break;
        }
    }while(1);
    printf("thank you");
    return 0; 
}