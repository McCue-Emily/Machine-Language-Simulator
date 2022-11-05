#include "commandFunctions.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdint>
#include <sstream>

using namespace commands;
using namespace std;

/**
 * @brief formatHex function converts the string passed into it into a uint32_t hexadecimal number
 * 
 * @param operand the hexadecimal number stored as a string
 * @return uint32_t hexadecimal converted operand
 */
uint32_t CommandFunctions::formatHex(string operand) {

    stringstream str1;
    uint32_t intOperand;

    // pass operand into string and convert it to hex and store in intOperand variable
    str1 << operand;
    str1 >> hex >> intOperand;

    // return uint32_t operand value
    return intOperand;

}

/**
 * @brief addFunc function adds two hexadecimal numbers and prints the formatted output to the console.
 * 
 * @param operation the command operation
 * @param operand1 first hex value stored as string
 * @param operand2 second hex value stored as string
 */
void CommandFunctions::addFunc(string operation, string operand1, string operand2) {

    // format operands
    operand1.erase(0,2);
    operand2.erase(0,2);

    // format hex values and perform addition operation
    uint32_t intOperand1 = formatHex(operand1);
    uint32_t intOperand2 = formatHex(operand2);
    uint32_t result = intOperand1 + intOperand2;

    // format output
    string formattedOperand1 = "0x" + operand1;
    string formattedOperand2 = "0x" + operand2 + ":";

    // display to console
    cout << left << setw(5) << operation << right << setw(15) << formattedOperand1 << right << setw(15) << formattedOperand2 << right << setw(5) << "0x" << right << hex << uppercase << result << endl;

}

/**
 * @brief andFunc function does a bitwise AND of two operands and prints the formatted output to the console.
 * 
 * @param operation the command operation
 * @param operand1 first hex value stored as string
 * @param operand2 second hex value stored as string
 */
void CommandFunctions::andFunc(string operation, string operand1, string operand2) {

    // format operands
    operand1.erase(0,2);
    operand2.erase(0,2);

    // format hex values and perform bitwise AND operation
    uint32_t intOperand1 = formatHex(operand1);
    uint32_t intOperand2 = formatHex(operand2);
    uint32_t result = intOperand1 & intOperand2;

    // format output
    string formattedOperand1 = "0x" + operand1;
    string formattedOperand2 = "0x" + operand2 + ":";

    // display to console
    cout << left << setw(5) << operation << right << setw(15) << formattedOperand1 << right << setw(15) << formattedOperand2 << right << setw(5) << "0x" << right << hex << uppercase << result << endl;

}

/**
 * @brief asrFunc function does a 1-bit arithmetic shift right on the first operand given the number of shifts and prints the formatted output to the console.
 * 
 * @param operation the command operation
 * @param operand1 hex value stored as string
 * @param shiftNum number of shifts stored as int
 */
void CommandFunctions::asrFunc(string operation, string operand1, int shiftNum) {

    // format operand
    operand1.erase(0,2);

    // format hex values and perform 1-bit arithmetic shift right on the first operand given the number of shifts
    uint32_t intOperand1 = formatHex(operand1);
    int32_t signedOperand1 = intOperand1;
    int32_t result = signedOperand1 >> shiftNum;

    // format output
    string formattedOperand1 = "0x" + operand1;
    string formattedShiftNum = to_string(shiftNum) + ":";

    // display to console
    cout << left << setw(5) << operation << right << setw(15) << formattedOperand1 << right << setw(15) << formattedShiftNum << right << setw(5) << "0x" << right << hex << uppercase << result << endl;

}

/**
 * @brief lsrFunc function does a 1-bit logical shift right on the first operand given the number of shifts and prints the formatted output to the console.
 * 
 * @param operation the command operation
 * @param operand1 hex value stored as string
 * @param shiftNum number of shifts stored as int
 */
void CommandFunctions::lsrFunc(string operation, string operand1, int shiftNum) {
    
    // format operand
    operand1.erase(0,2);

    // format hex values and perform 1-bit logical shift right on the first operand given the number of shifts
    uint32_t intOperand1 = formatHex(operand1);
    uint32_t result = intOperand1 >> shiftNum;

    // format output
    string formattedOperand1 = "0x" + operand1;
    string formattedShiftNum = to_string(shiftNum) + ":";

    // display to console
    cout << left << setw(5) << operation << right << setw(15) << formattedOperand1 << right << setw(15) << formattedShiftNum << right << setw(5) << "0x" << right << hex << uppercase << result << endl;

}

/**
 * @brief lslFunc function does a 1-bit logical shift left on the first operand given the number of shifts and prints the formatted output to the console.
 * 
 * @param operation the command operation
 * @param operand1 hex value stored as string
 * @param shiftNum number of shifts stored as int
 */
void CommandFunctions::lslFunc(string operation, string operand1, int shiftNum) {

    // format operand
    operand1.erase(0,2);

    // format hex values and perform 1-bit logical shift left on the first operand given the number of shifts
    uint32_t intOperand1 = formatHex(operand1);
    uint32_t result = intOperand1 << shiftNum;

    // format output
    string formattedOperand1 = "0x" + operand1;
    string formattedShiftNum = to_string(shiftNum) + ":";

    // display to console
    cout << left << setw(5) << operation << right << setw(15) << formattedOperand1 << right << setw(15) << formattedShiftNum << right << setw(5) << "0x" << right << hex << uppercase << result << endl;

}

/**
 * @brief notFunc function does a bitwise NOT of operand and prints the formatted output to the console.
 * 
 * @param operation the command operation
 * @param operand1 hex value stored as string
 */
void CommandFunctions::notFunc(string operation, string operand1) {

    // format operand
    operand1.erase(0,2);

    // format hex values and perform bitwise NOT of operand
    uint32_t intOperand1 = formatHex(operand1);
    uint32_t result = ~intOperand1;

    // format output
    string formattedOperand1 = "0x" + operand1 + ":";

    // display to console
    cout << left << setw(5) << operation << right << setw(30) << formattedOperand1 << right << setw(5) << "0x" << right << hex << uppercase << result << endl;

}

/**
 * @brief orrFunc function does a bitwise OR of two operands and prints the formatted output to the console.
 * 
 * @param operation the command operation
 * @param operand1 first hex value stored as string
 * @param operand2 second hex value stored as string
 */
void CommandFunctions::orrFunc(string operation, string operand1, string operand2) {

    // format operands
    operand1.erase(0,2);
    operand2.erase(0,2);

    // format hex values and perform bitwise OR of the two operands 
    uint32_t intOperand1 = formatHex(operand1);
    uint32_t intOperand2 = formatHex(operand2);
    uint32_t result = intOperand1 | intOperand2;

    // format output
    string formattedOperand1 = "0x" + operand1;
    string formattedOperand2 = "0x" + operand2 + ":";

    // display to console
    cout << left << setw(5) << operation << right << setw(15) << formattedOperand1 << right << setw(15) << formattedOperand2 << right << setw(5) << "0x" << right << hex << uppercase << result << endl;

}

/**
 * @brief subFunc function subtracts the second operand from the first operand and prints the formatted output to the console.
 * 
 * @param operation the command operation
 * @param operand1 first hex value stored as string
 * @param operand2 second hex value stored as string
 */
void CommandFunctions::subFunc(string operation, string operand1, string operand2) {

    // format operands
    operand1.erase(0,2);
    operand2.erase(0,2);

    // format hex values and subtracts the second operand from the first operand
    uint32_t intOperand1 = formatHex(operand1);
    uint32_t intOperand2 = formatHex(operand2);
    uint32_t result = intOperand1 - intOperand2;

    // format output
    string formattedOperand1 = "0x" + operand1;
    string formattedOperand2 = "0x" + operand2 + ":";

    // display to console
    cout << left << setw(5) << operation << right << setw(15) << formattedOperand1 << right << setw(15) << formattedOperand2 << right << setw(5) << "0x" << right << hex << uppercase << result << endl;

}

/**
 * @brief xorFunc function does a bitwise exclusive OR of two operands and prints the formatted output to the console.
 * 
 * @param operation the command operation
 * @param operand1 first hex value stored as string
 * @param operand2 second hex value stored as string
 */
void CommandFunctions::xorFunc(string operation, string operand1, string operand2) {

    // format operands
    operand1.erase(0,2);
    operand2.erase(0,2);

    // format hex values and perform bitwise exclusive OR of two operands
    uint32_t intOperand1 = formatHex(operand1);
    uint32_t intOperand2 = formatHex(operand2);
    uint32_t result = intOperand1 ^ intOperand2;

    // format output
    string formattedOperand1 = "0x" + operand1;
    string formattedOperand2 = "0x" + operand2 + ":";

    // display to console
    cout << left << setw(5) << operation << right << setw(15) << formattedOperand1 << right << setw(15) << formattedOperand2 << right << setw(5) << "0x" << right << hex << uppercase << result << endl;

}