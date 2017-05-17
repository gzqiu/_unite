#ifndef _SERIAL_MESSAGE__H
#define _SERIAL_MESSAGE__H

#include <iostream>
#include <stdio.h>

#include "global.h"

namespace  s_mag
{
class _serial_message_;
}

class _serial_message_
{
public:

    /**
     * 声明为explicit的构造函数不能在隐式转换中使用。
     */
    explicit  _serial_message_();

    virtual void _read_msg();
    virtual void _send_msg(char &msg);
    virtual void _send_msg(char *smsg);
    virtual void _send_msg(std::string &msg);
    virtual void _send_msg(MESSAGE_SEND_MODE &mode);

    static void display(std::string &msg);
    static void display();

protected:


private:


};


#endif // _SERIAL_MESSAGE__H
