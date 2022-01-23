#ifndef UE4SS_SDK_HUD_Inventory_ItemCount_HPP
#define UE4SS_SDK_HUD_Inventory_ItemCount_HPP

class UHUD_Inventory_ItemCount_C : public UUserWidget
{
    class UTextBlock* ItemAmount;
    class UProgressBar* ItemProgress;
    FText ItemName;
};

#endif
