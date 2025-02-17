#pragma once
#include <include/shaiya/common.h>

namespace shaiya
{
    typedef Array<char, 21> CraftName;
    typedef Array<UINT8, 6> Gems;
    using CloakBadge = Gems;

    #pragma pack(push, 1)
    struct CItem
    {
        PAD(1);               //0x00
        UINT8 type;           //0x01
        UINT8 typeId;         //0x02
        UINT8 count;          //0x03
        UINT16 quality;       //0x04
        Gems gems;            //0x06
        CraftName craftName;  //0x0C
        PAD(3);
        BOOL isBagToBag;      //0x24
        PAD(12);
        // 0x34
    };
    #pragma pack(pop)
}
