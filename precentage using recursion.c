# include <stdio.h>

float percentinScience (float Science);

float percentinMaths(float Maths);

float percentinSanskrit(float Sanskrit);

int main () {
    
    float marks1 = percentinScience(67);
    printf("percent in science : %f\n", marks1);
    float marks2 = percentinMaths(60);
    printf("percent in maths : %f\n", marks2);
    float marks3 = percentinSanskrit(87);
    printf("percent in sanskrit : %f\n", marks3);
    return 0;
}

float percentinScience(float Science) {
    float marks1 = Science / 100;
    return marks1;
}
float percentinMaths(float Maths) {
    float marks2 = Maths / 100;
    return marks2;
}
float percentinSanskrit(float Sanskrit) {
    float marks3 = Sanskrit / 100;
    return marks3;
}
