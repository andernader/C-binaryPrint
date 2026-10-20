#include <stdio.h>

int power_func(int input, int power){
    int result = 1;
    for(int i = power; i > 0; i--)
        result *= input;
    return result;
}

int binary_printf(int input){
    int arr[32] = {0}; //it shows up to 32 bit.
    int result_in_binary = 0;
    for(int i = 0, y = 32; i < 32; i++){
        arr[i] = (input & (1 << y)) >> y;
        result_in_binary += arr[i] * power_func(10, y--);
    }
    return result_in_binary;
}

int main(void){
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    printf("%d\n%d", user_input, binary_printf(user_input));
    return 0;
}
