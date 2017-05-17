#include <iostream>
#include "_serial_message_.h"

using namespace std;
//using namespace s_mag;

int main(int argc, char *argv[])
{


    std::string str = std::string("111111");
    std::string &str1 =str;

    cout << "Hello World!" << endl;
    _serial_message_::display(str1);

   //printf((char*) argc,"%d");
    printf(argv[0],"%s");

    //_serial_message_::display(*argv);
    //_serial_message_::display((char*)argc);

    return 0;
}
