#ifndef UE4SS_SDK_ITM_MasteryBar_Icon_HPP
#define UE4SS_SDK_ITM_MasteryBar_Icon_HPP

class UITM_MasteryBar_Icon_C : public UMasteryIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimUnlocked;
    class UProgressBar* BG;
    class UImage* ICON_Padlock;
    class UImage* Icon_Unlock;
    class UImage* Image_BG;
    class UImage* Image_Glow;
    class UImage* Image_Outline;
    class USizeBox* LockSizer;
    class UWidgetSwitcher* LockSwitcher;
    class UProgressBar* outline;
    class UCanvasPanel* RootCanvas;
    bool Filled;
    bool ShowIcons;
    TArray<class UUnlockReward*> Unlocks;
    class UItemID* Item;

    void ToggleIcons(bool ShowIcons, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetUnlocked(bool IsUnlocked, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, float K2Node_Select_Default, int32 K2Node_Select_Default_1);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ReceiveUnlocked();
    void ExecuteUbergraph_ITM_MasteryBar_Icon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UTOOLTIP_MasteryIcon_C* CallFunc_Create_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
};

#endif
