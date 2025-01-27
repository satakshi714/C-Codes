# include <stdio.h>

int main() {
    // increment operator
    // ++i - pre increment operator
    // i++ - post increment operator

    // --i - pre decrement
    // i-- - post decrement

    int i = 1;
    printf("%d \n", i++); // use the value then increase i.e., use i first then next value is increased
    printf("%d \n", i);
    
    int j = 1;
    printf("%d \n", ++j); // increase the value then use i.e., increase value first then next value is i
    printf("%d \n", j);

    int k = 1;
    printf("%d \n", k--); // use the value then decrease i.e., use k first then next value is decrease
    printf("%d \n", k);
    
    int l = 1;
    printf("%d \n", --l); // decrease the value then use i.e., decrease value first then next value is l
    printf("%d \n", l);
    return 0;
}

// loop counter can be float or character