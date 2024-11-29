#include "terminal_colors.h"
#include <stdio.h>

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

int main(void) {
   #ifdef COLORS_ENABLED
   rainbows("RAINBOWS! ", false);
   rainbows("ARE! ", false);
   rainbows("Fun!", true);
   #endif

   return 0;
}

void rainbows(char *str, int printNewline){
    static int colorIndex = FOREGROUND_START_INDEX;
    for (int i = 0; str[i] != '\0'; i++, colorIndex++) {
        printf(GENERIC_PRINTF_CODE"%c", colorIndex, str[i]);
        if (colorIndex == FOREGROUND_END_INDEX) colorIndex = FOREGROUND_START_INDEX;
    }
    if (printNewline) printf("\n");

    return;
}