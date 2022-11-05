*Title:* Programming Project, Part 2

*Author:* Emily McCue

*Due Date:* November 4, 2022

*Class:* CS 219, Section 1001

*Professor:* Prof. Bashira Akter Anima
***

*Project Requirements:*
You are tasked with designing a machine language simulator. This project must be written in C or C++. If you elect to use C++ be careful with your objects. For part 2, you must only implement the ADD, AND, ASR, LSR, LSL, NOT, ORR, SUB, and XOR operation. You will be given a text file for input on this project, following the format discussed in the Theory section.

Treat every operation for unsigned 32-bit values except the ASR operation. For ASR, treat the values as signed 32-bit values. Using the provided text file as an example input. You will create a program that reads the command and performs the operation between the two hexadecimal numbers.

The result of the operation must be displayed to the terminal. Your code should follow proper code commenting and indentation procedures. Your results output should be printed in the same order as the text input file. No need to mention overflow situations in any case. Just print out the value that should be in 32 bits. The numbers will be in hexadecimal and should be displayed on the screen as hexadecimal.

*System Design:*

    main.cpp -> reads data from Programming-Project.txt and calls proper command functions implemented in 
    commandFunctions.cpp
    
    commandFunctions.cpp -> includes the implementation code of command functions called in main.cpp
    
    commandFunctions.h -> includes function declarations for functions implemented in commandFunctions.cpp
    
    Programming-Project.txt -> hard coded with hexadecimal values to perform commands on
    
    Makefile -> type 'make' into terminal to execute code


*Implementation of Functionalities:*

    Using C++ language, a main command loop has been built in the driver file which accesses the command of each line and 
    read the appropriate amount of data based on that command. After this, it will call the appropriate function from the 
    commandFunctions.h file. It will loop through this command loop until there is no more data to be read.
    
    ***
    
    formatHex function: This function passes the string operand into a string stream and passes it back out to be stored as a 
    hex in a uint_32t data type.
    
    ***
    
    ADD Command: The ADD command is built into the addFunc in the commandFunctions.cpp file. The operation name as well as 
    each operand in the command line is passed into this function as parameters. The operands are then formatted and converted 
    to hex values of data type uint32_t by calling the formatHex() function. The addition is then performed on these two 
    values and the initial string operands are then formatted for display. All values are then displayed to the console, 
    formatted into columns for optimal readability.
    
    ***
    
    AND Command: The AND command is built into the andFunc in the commandFunctions.cpp file. The operation name as well as 
    each operand in the command line is passed into this function as parameters. The operands are then formatted and converted 
    to hex values of data type uint32_t by calling the formatHex() function. The bitwise AND is then performed on these two 
    values and the initial string operands are then formatted for display. All values are then displayed to the console, 
    formatted into columns for optimal readability.
    
    ***
    
    ASR Command: The ASR command is built into the asrFunc in the commandFunctions.cpp file. The operation name as well as 
    the operand and number of shifts in the command line is passed into this function as parameters. The operand is then 
    formatted and converted to hex value of data type uint32_t by calling the formatHex() function. The 1-bit arithmetic shift 
    right is then performed on this value and the initial string operand is then formatted for display. All values are then 
    displayed to the console, formatted into columns for optimal readability.
    
    ***
    
    LSR Command: The LSR command is built into the lsrFunc in the commandFunctions.cpp file. The operation name as well as 
    the operand and number of shifts in the command line is passed into this function as parameters. The operand is then 
    formatted and converted to hex value of data type uint32_t by calling the formatHex() function. The 1-bit logical shift 
    right is then performed on this value and the initial string operand is then formatted for display. All values are then 
    displayed to the console, formatted into columns for optimal readability.
    
    ***
    
    LSL Command: The LSL command is built into the lslFunc in the commandFunctions.cpp file. The operation name as well as 
    the operand and number of shifts in the command line is passed into this function as parameters. The operand is then 
    formatted and converted to hex value of data type uint32_t by calling the formatHex() function. The 1-bit logical shift 
    left is then performed on this value and the initial string operand is then formatted for display. All values are then 
    displayed to the console, formatted into columns for optimal readability.
    
    ***
    
    NOT Command: The NOT command is built into the notFunc in the commandFunctions.cpp file. The operation name as well as 
    the operand in the command line is passed into this function as parameters. The operand is then formatted and converted 
    to hex value of data type uint32_t by calling the formatHex() function. The bitwise NOT is then performed on this value 
    and the initial string operand is then formatted for display. All values are then displayed to the console, formatted 
    into columns for optimal readability.
    
    ***
    
    ORR Command: The ORR command is built into the orrFunc in the commandFunctions.cpp file. The operation name as well as
    each operand in the command line is passed into this function as parameters. The operands are then formatted and 
    converted to hex values of data type uint32_t by calling the formatHex() function. The bitwise OR is then performed on 
    these two values and the initial string operands are then formatted for display. All values are then displayed to the 
    console, formatted into columns for optimal readability.
    
    ***
    
    SUB Command: The SUB command is built into the subFunc in the commandFunctions.cpp file. The operation name as well as 
    each operand in the command line is passed into this function as parameters. The operands are then formatted and converted 
    to hex values of data type uint32_t by calling the formatHex() function. The subtraction of the second operand from the 
    first is then performed on these two values and the initial string operands are then formatted for display. All values 
    are then displayed to the console, formatted into columns for optimal readability.
    
    ***
    
    XOR Command: The XOR command is built into the xorFunc in the commandFunctions.cpp file. The operation name as well as 
    each operand in the command line is passed into this function as parameters. The operands are then formatted and converted 
    to hex values of data type uint32_t by calling the formatHex() function. The bitwise exclusive OR is then performed on 
    these two values and the initial string operands are then formatted for display. All values are then displayed to the 
    console, formatted into columns for optimal readability.
