#include <stdio.h>
#include <string.h>
 
int main() {
    int n, x = 0;
    char str[5];
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
 
        if (strcmp(str, "X++") == 0 || strcmp(str, "++X") == 0) {
            x++;
        } else if (strcmp(str, "X--") == 0 || strcmp(str, "--X") == 0) {
            x--;
        }
    }
 
    printf("%d\n", x);
    return 0;
}
