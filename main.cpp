#include <iostream>

struct student
{
    int id{};
    char grade{};
};

void printStudent(const student& s )
{
    std::cout << "ID:" << s.id << '\n';
    std:: cout << "Grade:" << s.grade << '\n';
}
student inputStudent()
{
    student s{};
    std:: cout << "ENter student ID:";
    std:: cin >> s.id;
    std::cout << "Eneter studnet garde (A/B/C/D/F)";
    std:: cin >> s.grade;
    return s;
}

int main()
{
    student kim{ 1234567, 'A'};
    printStudent(kim);

    student lee{inputStudent()};
    printStudent(lee);

    return 0;
}