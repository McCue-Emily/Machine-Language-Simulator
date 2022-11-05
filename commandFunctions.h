#ifndef COMMAND_FUNCTIONS
#define COMMAND_FUNCTIONS

using namespace std;

namespace commands {
    class CommandFunctions {
        private:
            uint32_t formatHex(string);
            string operation;
            string operand1;
            string operand2;
            int shiftNum;
        public:
            void addFunc(string, string, string);
            void andFunc(string, string, string);
            void asrFunc(string, string, int);
            void lsrFunc(string, string, int);
            void lslFunc(string, string, int);
            void notFunc(string, string);
            void orrFunc(string, string, string);
            void subFunc(string, string, string);
            void xorFunc(string, string, string);
    };
}
#include "commandFunctions.cpp"
#endif