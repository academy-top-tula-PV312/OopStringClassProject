#include <iostream>
#include "String.h"

int main()
{
    {
        String s('*', 20);
        String s1("Hello world");
        
        String s2(s1);  // copy construct
        String s3 = s2; // copy construct

        std::cout << s << " " << s1 << " " << s2 << " " << s3 << "\n";

        String s4;
        s4 = s;
        std::cout << s4 << "\n";

        s4 = "Hello people Hello all";
        std::cout << s4 << "\n";

        //char* cs1 = new char;
        //std::cin.getline(cs1, SHRT_MAX);
        ////std::cin >> cs1;
        //std::cout << std::cin.gcount() << " " << cs1;

        /*std::cin >> s4;
        std::cout << s4 << "\n";*/

        std::cout << s4[7] << "\n";
        s4[7] = '$';
        std::cout << s4 << "\n";
    }
}
