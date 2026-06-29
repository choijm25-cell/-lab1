#include <iostream>
int main()
{
    
    int i{ 1 };
    const int end{ 10 };
    do
{
    std::cout << i << ' ';
    ++i;
} while (i <= end);
    std::cout << std::endl;
    i = 1;
    while (i <= end)
{
    std::cout << i << ' ';
    ++i;
}
std::cout << std::endl;
// i = 1;
// for ( ; i <= end; )
// {
// }
// std::cout << i << ' ';
// ++i;
// std::cout << std::endl;
// for (i = 1; i <= end; ++i)
// {
// std::cout << i << ' ';
// }
// std::cout << std::endl;
// return 0;
// }
    // if (score >=90)
    // grade = 'A';
    // else if (score >= 80)
    // grade = 'B';
    // else if (score >= 70)
    // grade = 'C';
    // else if (score >= 60)
    // grade = 'D';
    // else
    // grade = 'F';
    // std::cout << "enter your score (0~100):";
    // int score{};
    // char grade{};
    // std::cin >> score;
    // switch (score/10)
    // {
    //     case 10:
    //     case 9: grade = 'A'; break;
    //     case 8: grade = 'B';break;
    //     case 7: grade = 'C';break;
    //     case 6: grade = 'D';break;
    //     default: grade = 'F';
    }
    // std::cout << "Enter 1.2 or3: ";
    // int x();
    // std::cin >> x;
    // switch(x)
    // {
    //     case 1: std::cout << "one\n"; break;
    //     case 2: std:: cout << " two\n"; break;
    //     case 3: std:: cout<< "three\n"; break;
    //     default : std:: cout<< "unknown\n"; 
    // }
    // if (x>y)
    // std::cout << "Enter an inteager:" ;
    // int x{};
    // std::cin >> x;
    // if(x>0) std::cout << "positive\n";
    // else if (x<0) std::cout << "neagtive\n";
    // if (x==0) std::cout << "Zero\n";
    // else std::cout << "nonZero\n";

    // int numOfStudents{30}; numOfStudents =20
    // std::cout << numOfStudents << std:: endl;
    // std::cout < sizeof(numOfStudents) << std:: endl;
    // std::cout << typeid(numOfStudents).name () << std::endl;
    // std::cout << typeid(static_cast<double>(numOfStudents)).name() << std::endl;

    // return 0;
}