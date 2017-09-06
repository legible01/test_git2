#ifndef PACKET_INFO_H
#define PACKET_INFO_H
#include <stdint.h>
#include "packet_info.h"
class packet_info
{
private:
    char *dev_name;

    int param_count;
    uint8_t **sender_mac;//[param_count][6] //= new uint32_t[param_count][6];


public:
    void set_param_ip(int p_count,char *p_ip);

};


//85 drink
#endif // PACKET_INFO_H
