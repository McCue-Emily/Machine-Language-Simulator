#include <iostream>
#include <string>
#include <fstream>

#include "commandFunctions.h"

using namespace commands;
using namespace std;

int main() {

    CommandFunctions newCommand;
    string operation, operand1, operand2;
    int shiftNum;

    ifstream inFile("Programming-Project-2.txt");

    /*  
        Reads command from file and loops through command loop.
        Depending on the command, it will read the rest of the data in the command line.
        Then call the appropriate function.
    */
    while(inFile >> operation) {
        if (operation == "ADD") {
            inFile >> operand1 >> operand2;
            newCommand.addFunc(operation, operand1, operand2);
        } else if (operation == "AND") {
            inFile >> operand1 >> operand2;
            newCommand.andFunc(operation, operand1, operand2);
        } else if (operation == "ASR") {
            inFile >> operand1 >> shiftNum;
            newCommand.asrFunc(operation, operand1, shiftNum);
        } else if (operation == "LSR") {
            inFile >> operand1 >> shiftNum;
            newCommand.lsrFunc(operation, operand1, shiftNum);
        } else if (operation == "LSL") {
            inFile >> operand1 >> shiftNum;
            newCommand.lslFunc(operation, operand1, shiftNum);
        } else if (operation == "NOT") {
            inFile >> operand1;
            newCommand.notFunc(operation, operand1);
        } else if (operation == "ORR") {
            inFile >> operand1 >> operand2;
            newCommand.orrFunc(operation, operand1, operand2);
        } else if (operation == "SUB") {
            inFile >> operand1 >> operand2;
            newCommand.subFunc(operation, operand1, operand2);
        } else if (operation == "XOR") {
            inFile >> operand1 >> operand2;
            newCommand.xorFunc(operation, operand1, operand2);
        }
    }

    return 0;
}