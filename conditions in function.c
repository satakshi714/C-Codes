# include <stdio.h>
void Namaste();
void Bonjour();

int main() {
    char user;
    printf("enter i for indian and f for french : ");
    scanf("%c", &user);
    if (user == 'i'){
        Namaste();
    }else {
        Bonjour();
    }
    return 0;
}
void Namaste(){
    printf("Namaste");
}

void Bonjour(){
    printf("Bonjour");
}
