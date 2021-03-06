/* Exercise 1-6
*  Verify that the expression getchar() != EOF is 0 or 1
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
   int c;
    while ((c = getchar()) != EOF) {
        printf("%d", c != EOF); /* If c != EOF, expected result is 1 */

    }
    printf("%d", c != EOF); /* Breaking out of the previous loop by EOF input will result in 0
                            /* Being printed here */

    return 0;
}


