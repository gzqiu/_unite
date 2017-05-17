#include "_serial_message_.h"

/**
 * @brief _serial_message_::_serial_message_
 */
_serial_message_::_serial_message_()
{

}

/**
 * @brief _serial_message_::_send_msg
 * @param msg 发送的数据
 */
void _serial_message_::_send_msg(std::string &msg)
{
    std::cout<<msg<<std::endl;
}

/**
 * @brief _serial_message_::_send_msg
 * @param msg
 */
void _serial_message_::_send_msg(char &msg)
{
   printf(&msg,"%s");
}

void _serial_message_::_send_msg(char *_p_msg)
{

    int i  =  printf(_p_msg,"%d");

    std::cout<<"_send_msg(char *_p_msg) send Length is:"<<i;
}

void _serial_message_::_send_msg(MESSAGE_SEND_MODE &mode)
{
    std::cout<<"translater mode :"<<mode<<std::endl;
}

void _serial_message_::_read_msg()
{

}

void _serial_message_::display(std::string &msg)
{
    std::cout<<"play static fun, msg is: "<<msg<<std::endl;

}

void _serial_message_::display()
{
    std::cout<<"play static fun, msg is: "<<std::endl;
}

