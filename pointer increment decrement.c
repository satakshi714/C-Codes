 #include <stdio.h>

 int main() {
     int age = 22;
     int *ptr = &age;
     printf("ptr = %u",ptr);
     ptr++;
     printf("\nptr = %u",ptr);
     ptr--;
     printf("\nptr = %u",ptr);

    return 0;
 }