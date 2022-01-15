#ifndef UE4SS_SDK_ITM_MasteryBar_Icon_HPP
#define UE4SS_SDK_ITM_MasteryBar_Icon_HPP

class UITM_MasteryBar_Icon_C : UMasteryIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimUnlocked;
    UProgressBar* BG;
    UImage* ICON_Padlock;
    UImage* Icon_Unlock;
    UImage* Image_BG;
    UImage* Image_Glow;
    UImage* Image_Outline;
    USizeBox* LockSizer;
    UWidgetSwitcher* LockSwitcher;
    UProgressBar* outline;
    UCanvasPanel* RootCanvas;
    bool Filled;
    bool ShowIcons;
    TArray<UUnlockReward*> Unlocks;
    UItemID* Item;

    void ToggleIcons(bool ShowIcons, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetUnlocked(bool IsUnlocked, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, float K2Node_Select_Default, int32 K2Node_Select_Default_1);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ReceiveUnlocked();
    void ExecuteUbergraph_ITM_MasteryBar_Icon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UTOOLTIP_MasteryIcon_C* CallFunc_Create_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
}

#endif
