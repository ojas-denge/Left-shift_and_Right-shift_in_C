//Left Shift and Right Shift
#include <stdio.h>
int main() {
    int n;
    
    printf("Enter a value:\n");
    scanf("%d", &n);
    
    printf("The RIGHT SHIFT value is:%d\n", n>>1);
    printf("The LEFT SHIFT value is :%d\n", n<<1);
    
    return 0;
}