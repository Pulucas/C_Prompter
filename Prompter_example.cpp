#include <iostream>

int OptionNum;

void option_hello();
void option_info();
void option_goodbye();
void number_caller(int OptionNum);


int main()
{
    std::cout << "Welcome to The Prompter!\n";
    std::cout << "This is an example project to use for making a setup program.\n";
    std::cout << "\n";
    std::cout << "Please type an options number to continue:\n";
    std::cout << "Option 1: Hello!\n";
    std::cout << "Option 2: Info.\n";
    std::cout << "Option 3: Goodbye!\n";
    std::cin >> OptionNum;

    number_caller(OptionNum);

    return 0;
}

void number_caller(int OptionNum) {
    switch (OptionNum) {
    case 1:
        option_hello();
        break;
    case 2:
        option_info();
        break;
    case 3:
        option_goodbye();
        break;
    default:
        std::cout << "Invalid option selected.\n";
        break;
    }
}


void option_hello() {
    std::cout << "hello, i am a silly billy little iddy bitty programmer\n";
}

void option_info() {
    std::cout << "this info option is about info. ";
    for (int i = 0; i < 41; i++) {
        std::cout << "whats the info? the info is about info. ";
    }
    std::cout << "\n";
}

void option_goodbye() {
    std::cout << "fuck you\n";
}
