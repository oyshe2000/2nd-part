#include <stdio.h>
#include <stdlib.h>
int main (void){
    printf("%d",test(11,21));
    printf("\n%d",test(11,20));
    printf("\n%d", test(10,10));
    }
    int test(int x, int y, int z)
        {
            if (x == y)
            {
                return 0;
            }
            else if ((x % 5 == y %5 && x<y) || x>y)
            {
                return x;
            }
            else
            {
                return y;
            }
        }
