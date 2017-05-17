#ifndef MSG_H
#define MSG_H

#include "_serial_message_.h"


class msg : _serial_message_
{
public:
    msg();


    void _send_msg(std::string & ms);
    void _read_msg();

};

#endif // MSG_H
