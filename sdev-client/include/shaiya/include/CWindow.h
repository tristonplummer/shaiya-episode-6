#pragma once
#include <include/shaiya/common.h>

namespace shaiya
{
    enum struct WindowType : UINT32
    {
        None,
        Teleportation = 17,
        CashShop,
        GiftBox,
        AppearanceChange,
        SexChange,
        Talk = 100,
        Merchant,
        Blacksmith,
        Warehouse,
        LinkAndExtract,
        Priest,
        GamblingHouse,
        GateKeeper,
        VetManager,
        BadgeMerchant,
        BankTeller,
        GuildMaster,
        AuctionBoard = 117,
        ProBlacksmith = 120,
        Recreation,
        Creation,
        RuneCombination = 126,
    };

    #pragma pack(push, 1)
    struct CWindow
    {
        PAD(4);
        D2D_POINT_2U pos;       //0x04
        D2D_SIZE_U size;        //0x0C
        BOOL dragEvent;         //0x14
        D2D_POINT_2U clickPos;  //0x18
        BOOL visible;           //0x20
        // 0x24

        static void Draw(LPDIRECT3DBASETEXTURE9 texture, long x, long y);
    };
    #pragma pack(pop) 
}
