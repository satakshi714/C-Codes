# include <stdio.h>
float temp(float t);

int main () {

    float far = temp(30);
    printf("far : %f",far);
    return 0;
}

float temp (float t){
    
    float far = t * (9/5) + 32;
    return far;
}