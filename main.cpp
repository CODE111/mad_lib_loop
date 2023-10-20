
// Mad Libs are activities that have a person provide various words, which are
// then used to complete a short story in unexpected (and hopefully funny) ways.
//
// Write a program that takes a string and an integer as input,
// and outputs a sentence using the input values as shown in the example below.
// The program repeats until the input string is quit and disregards the integer
// input that follows.
//
// Ex: If the input is:
//
// apples 5
// shoes 2
// quit 0
// the output is:
//
// Eating 5 apples a day keeps you happy and healthy.
// Eating 2 shoes a day keeps you happy and healthy.

#include <iostream>
#include <string>

int main() {

    std::string user_str;
    int user_input;


    std::string program_quit = "quit";
    int quit_program = 0;


    while (true) {
        std::cin >> user_str >> user_input;
        if (user_str == program_quit && user_input == quit_program) {
            break;
        }
        if (user_str == "apple" && user_input != quit_program) {
            std::cout << "Eating " << user_input << " " << user_str << " a day keeps you happy and healthy." << std::endl;
        }
        else if (user_str == "shoes" && user_input != quit_program) {
            std::cout << "Eating " << user_input << " " << user_str << " a day keeps you happy and healthy." << std::endl;
        }
        else {
            break;
        }
    }

    return 0;
}