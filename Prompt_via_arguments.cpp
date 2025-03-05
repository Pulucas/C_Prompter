#include <iostream>
#include <cstring>

// Function declarations
void hello_choice();
void here_choice();
void why_choice();
void bye_choice();

int main(int argc, char* argv[]) {
    // Check if the number of arguments is correct
    if (argc == 3 && strcmp(argv[1], "say") == 0) {
        // Call the appropriate function based on the second argument
        if (strcmp(argv[2], "hello") == 0) {
            hello_choice();
        }
        else if (strcmp(argv[2], "here") == 0) {
            here_choice();
        }
        else if (strcmp(argv[2], "why") == 0) {
            why_choice();
        }
        else if (strcmp(argv[2], "bye") == 0) {
            bye_choice();
        }
        else {
            std::cerr << "Invalid argument. Available choices are: hello, here, why, bye." << std::endl;
        }
    }
    else {
        std::cerr << "Usage: argprog say [hello|here|why|bye]" << std::endl;
    }

    return 0;
}

// Function definitions
void hello_choice() {
    std::cout << "hello" << std::endl;
}

void here_choice() {
    std::cout << "I'm here" << std::endl;
}

void why_choice() {
    std::cout << "why why why?" << std::endl;
}

void bye_choice() {
    std::cout << "good bye" << std::endl;
}
