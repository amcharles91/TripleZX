// TripleZX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void PrintIntroduction() {
    //Welcome to Triple ZX, the world needs your puzzle solving skills
    std::cout << "The world is in peril, you have found an unground bunker\n";
    std::cout << "You must get in before the bombs start dropping but you need to solve the code for the door";
    std::cout << "Hurry time is running out!";
}

void PlayGame() {
    //Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    //Get the sum
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;

    std::cout << "There are 3 numbers in the code\n";
    std::cout << "The codes have a sum of :" << CodeSum << std::endl;
    std::cout << "With a product of : " << CodeProduct << std::endl;

    std::cout << "Please hurry and enter the 3 digits of the correct code, we only have one chance \n";

    //Get Player Input
    int GuessA, GuessB, GuessC;
    std::cout << "Please Enter the codes seperated by a space: \n";
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You Entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum) {
        if (GuessProduct == CodeProduct) {
            std::cout << "You Entered the correct code! We made it into the bunker \n";
        }
    }
    else {
        std::cout << "You Entered the wrong code! We are not going to make it in time, take cover! \n";
    }

    //Clear input buffer
    std::cin.clear();
    //Discard buffer
    std::cin.ignore();
}

int main()
{
    PrintIntroduction();

    PlayGame();

    //Successful execution
    return 0;
}
