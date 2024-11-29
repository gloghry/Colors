#include "terminal_colors.h"
#include <stdio.h>


int main(void) {
   colorTest();

   return 0;
}

void colorTest(void) {
   for (int textcolor = FOREGROUND_START_INDEX; textcolor <= FOREGROUND_END_INDEX; textcolor++) {
      printf("\033[%dm\n", textcolor);
      for (int backcolor = BACKGROUND_START_INDEX; backcolor <= BACKGROUND_END_INDEX; backcolor++) {
         printf("\033[%dm", backcolor);
         printf("FG:%d BG:%d ", textcolor, backcolor);
      }
      printf(RESET);
   }

   printf(RESET"\n");
   return;
}
