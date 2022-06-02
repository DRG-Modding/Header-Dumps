#ifndef UE4SS_SDK_HUD_Salvage_Defend_PlayerSlot_HPP
#define UE4SS_SDK_HUD_Salvage_Defend_PlayerSlot_HPP

class UHUD_Salvage_Defend_PlayerSlot_C : public UUserWidget
{
    class UUI_ImageTinted_C* Filled;
    class UUI_ImageTinted_C* NotFilled;
    class UWidgetSwitcher* StateSwitcher;

    void SetPlayerSlotFilled(bool InFilled);
};

#endif
