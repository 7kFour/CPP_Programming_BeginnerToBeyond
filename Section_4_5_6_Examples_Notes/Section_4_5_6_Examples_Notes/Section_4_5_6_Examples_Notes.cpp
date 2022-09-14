#include <iostream>

// see namespaces in notes
using std::cout;
using std::cin;
using std::endl;

// c++ programs start execution at the main function
int main() {

    // create variable to illustrate basic i/o
    int data{ 3 };
    // {} initializes to zero automatically
    int data_in{};
    int data_in2{};

    // insert variable into cout stream
    cout << data;

    // stream insertion operator can be chained
    cout << "the value of data is " << data;

    // does not automatically include linebreaks -- you must do this explicitly
    cout << "the value of data is " << data << "\n";

    // endline stream manipulator adds a linebreak and flushes the stream
    // if a stream is buffered it may not get written to the console until its flushed
    cout << "the value of data is " << data << endl;

    // extract data from cin stream based on data's type
    // cin stream defaults to keyboard -- can be redirected
    // characters are stored in a buffer 
    cin >> data_in;

    // can be chained
    // can fail if entered data cannot be inerpreted
    // characters entered from keyboard will only be processed when enter key is pressed
    // uses whitespace to terminate value being extracted - new lines, spaces, tabs etc
    cin >> data_in >> data_in2;

    // buffer example 
    int num1{};
    int num2{};
    cout << "enter first integer: ";
    cin >> num1;

    cout << "enter second integer: ";
    cin >> num2;

    // if user types 100 200 at first prompt this will immediately execute and output 
    // "enter second integer: you entered 100 and 200" -- this is because pressing space makes whitespace 
    // and cin uses whitespace to terminate the value but the 200 is still in the buffer 
    // so the cin >> num2; immediately grabs that out of the buffer as soon as the second cout executes
    // and gives output before the user even has a chance to enter anything -- its not waiting
    // for the user to press enter because there is data in the buffer
    cout << "you entered " << num1 << " and " << num2 << endl;

    // similar example to above 
    int num3{};
    double num4{};

    cout << "enter an integer: ";
    cin >> num3;

    cout << "enter a double: ";
    cin >> num4;

    // user enters 10.5 
    // stream see the . and stops because the number can no longer be an integer 
    // but .5 is a double 
    // output is
    cout << "The integer is: " << num3 << endl; // 10
    cout << "The double is: " << num4 << endl; // 0.5

    // try entereing a string when it expects an int or different type to see some fun 
    // unexpected behavior

    // Chall 1
    // initialize to 0 to avoid having a garbage value in memory
    int favorite_number{};

    // all statements end in a ;
    // cout writes to console
    cout << "Please enter your favorite number: ";

    // cin reads from console
    cin >> favorite_number;

    // endl flushes buffer and creates a new line
    cout << "Amazing!!That's my favorite number too!" << endl;
    cout << "No, really, " << favorite_number << " is my favorite number!" << endl;

    // Chall 2

}

