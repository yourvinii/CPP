#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    /*
    cout << "Name - " << "VINAYAK MAJHI \n"
    << "Age - " << "23\n"
    << "City - " << "Shahdol \n";

    cout << "*\n"
    << "**\n"
         << "***\n"
         << "****\n"
         << "*****\n";

    cout << "*****\n"
    << "****\n"
         << "***\n"
         << "**\n"
         << "*\n";

         cout << "A\n"
         << "AB\n"
         << "ABC\n"
         << "ABCD\n"
         << "ABCDE\n";

         */
    // string name = "VINAYAK";
    // int age = 23;
    // float height = 5.1234567890;
    // char grade = 'A';
    // double cgpa = 9.1234567890;

    // cout << "Name - "  << name << "\nage - " << age << "\nHeight - " << setprecision(12) << height << "\nGrade - " << grade << "\ncpga " << setprecision(12) << cgpa;

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // cout << "Number : " << num;

    // int age;
    // string name;
    // cout << "Enter Your Name : ";
    // cin >> name;
    // cout << "Enter your age : ";
    // cin >> age;

    // cout << "Name : " << name << "\nAge : "  << age;

    // int num1, num2;
    // cout << "Enter two numbers : ";
    // cin >> num1 >> num2;
    // cout << "Num1 = " << num1 << "\nNum2 = " << num2;

    int physic;
    int math;
    int english;
    int hindi;
    int chemisty;

    cout << "Enter Math marks = ";
    cin >> math;
    cout << "Enter English marks = ";
    cin >> english;
    cout << "Enter Physic marks = ";
    cin >> physic;
    cout << "Enter Hindi marks = ";
    cin >> hindi;
    cout << "Enter Chemistry marks = ";
    cin >> chemisty;

    int sum = math + english + physic + hindi + chemisty;
    float avg = sum / 5;

    cout << "Sum = " << sum;
    cout << "\nAverage = " << avg;

    return 0;
}