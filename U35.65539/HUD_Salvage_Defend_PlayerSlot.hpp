#ifndef UE4SS_SDK_HUD_Salvage_Defend_PlayerSlot_HPP
#define UE4SS_SDK_HUD_Salvage_Defend_PlayerSlot_HPP

class UHUD_Salvage_Defend_PlayerSlot_C : UUserWidget
{
    UUI_ImageTinted_C* Filled;
    UUI_ImageTinted_C* NotFilled;
    UWidgetSwitcher* StateSwitcher;

    void SetPlayerSlotFilled(bool InFilled, bool Temp_bool_Variable, UWidget* K2Node_Select_Default);
}

#endif
