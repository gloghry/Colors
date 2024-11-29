# Terminal color libraries and hints
Making colors appear on the terminal can be chore in some languages. This repo aims to be a space where I can view notes, examples, and libraries I've amassed for certain languages.  

## Supported Languages
- Bash
- C

### Bash
I have used `tput` as the choice command for Bash because it seems portable, though I'm just a single guy with a few computers, so who knows. There is a reference for color code key value pairs within the file.

Run the fun color test with `./Bash/colorSample.sh`.

### C
C is the main reason I made this repo. It's god awful to work work with colors in C. The header file within `/src/` defines some color codes, and there's a test file to run to make sure all the colors run on your terminal. There is an example file for how to use it too, but it's always going to be a little nasty.

Run the fun color test with the `make run` recipe within the C directory.

## Contact
Issues, comments, or concerns can be sent to [loghry.g@gmail.com](mailto:loghry.g@gmail.com).
