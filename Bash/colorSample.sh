#!/bin/bash

# Colors for tput follow a set color code
# This apparently can change for certain terminals
# But this is probably valid usually.

# 0     | Black
# 1     | Red
# 2     | Green
# 3     | Yellow
# 4     | Blue
# 5     | Magenta
# 6     | Cyan
# 7     | White
# 8     | N/A
# 9     | Reset to Default

# Also setting them as a bash value by running tput
# Each contains a command that will set term value
# setaf sets the forground (so text) while
# setab set the background
BLACK=$(tput setaf 0)
RED=$(tput setaf 1)
GREEN=$(tput setaf 2)
YELLOW=$(tput setaf 3)
BLUE=$(tput setaf 4)
MAGENTA=$(tput setaf 5)
CYAN=$(tput setaf 6)
WHITE=$(tput setaf 7)
RESET=$(tput setaf 9)

# The colors can be used with a command like
# echo "${RED}The text is now red!${RESET}"

# Be sure to always RESET the color palette
# Ending a section or a program that uses colors this way
# could benefit from the use of
tput sgr0

# Which turns off all attributes 

# FOLLOWING NOT MINE
# tput_colors - Demonstrate color combinations.

for fg_color in {0..7}; do
    set_foreground=$(tput setaf $fg_color)
    for bg_color in {0..7}; do
        set_background=$(tput setab $bg_color)
        echo -n $set_background$set_foreground
        printf ' F:%s B:%s ' $fg_color $bg_color
    done
    echo $(tput sgr0)
done
