// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


//#include <iostream>
//#include "add.h" // include the header file
//
////int add(int x, int y); // function in add.cpp
//
//int main()
//{
//	std::cout << "Hello World!\n";
//
//	int x{ 5 };
//	std::cout << "x = " << x << std::endl;
//
//	std::cout << "Enter a number: ";
//
//	int y{};
//	std::cin >> y;
//	std::cout << "You entered: " << y << '\n';
//
//	//int z;
//	//std::cout << z << std::endl;
//
//	int zz{};
//	std::cout << zz << std::endl;
//
//	std::cout << add(x, y) << std::endl;
//
//
//
//}


//#include <bitset>
//#include <iostream>
//
//int main()
//{
//    std::bitset<8> bits{ 0b0000'0101 }; // we need 8 bits, start with bit pattern 0000 0101
//    bits.set(3);   // set bit position 3 to 1 (now we have 0000 1101)
//    bits.flip(4);  // flip bit 4 (now we have 0001 1101)
//    bits.reset(4); // set bit 4 back to 0 (now we have 0000 1101)
//
//    std::cout << "All the bits: " << bits << '\n';
//    std::cout << "Bit 3 has value: " << bits.test(3) << '\n';
//    std::cout << "Bit 4 has value: " << bits.test(4) << '\n';
//
//    return 0;
//}

#include <bitset>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr int  isHungry{ 0 };
    [[maybe_unused]] constexpr int  isSad{ 1 };
    [[maybe_unused]] constexpr int  isMad{ 2 };
    [[maybe_unused]] constexpr int  isHappy{ 3 };
    [[maybe_unused]] constexpr int  isLaughing{ 4 };
    [[maybe_unused]] constexpr int  isAsleep{ 5 };
    [[maybe_unused]] constexpr int  isDead{ 6 };
    [[maybe_unused]] constexpr int  isCrying{ 7 };

    std::bitset<8> me{ 0b0000'0101 }; // we need 8 bits, start with bit pattern 0000 0101
    me.set(isHappy);      // set bit position 3 to 1 (now we have 0000 1101)
    me.flip(isLaughing);  // flip bit 4 (now we have 0001 1101)
    me.reset(isLaughing); // set bit 4 back to 0 (now we have 0000 1101)

    std::cout << "All the bits: " << me << '\n';
    std::cout << "I am happy: " << me.test(isHappy) << '\n';
    std::cout << "I am laughing: " << me.test(isLaughing) << '\n';

    return 0;
}