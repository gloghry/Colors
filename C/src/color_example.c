#include "terminal_colors.h"
#include <stdio.h>

int main(void) {
   #ifdef COLORS_ENABLED
   colorExample();
   #endif

   return 0;
}

/* NOTE:
The library doesn't include a newline in any of its macros.
That means it's up to YOU to include a newline if you want one.

-> Newlines should come *after* a RESET or DEF(B) command, or it might not get flushed right. <-
Not doing this can lead to weird behavior of different terminals.
*/
void colorExample(void){
    printf("Normally text looks like this.\n");
    printf(RED"Now it's red!\n");
    printf("Be careful to reset your colors or they will persist."RESET"\n");
    printf(GRY"Some colors may not be supported, this is one such color."RESET"\n");
    printf(CYN MAGB"Text colors and backgrounds can be combined (if your terminal supports that)."RESET"\n");
    printf(CYN""MAGB"Spaces between macros work, or double quotes."RESET"\n");
    printf("Best of luck!\n");
    return;
}