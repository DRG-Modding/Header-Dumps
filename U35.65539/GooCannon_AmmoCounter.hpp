#ifndef UE4SS_SDK_GooCannon_AmmoCounter_HPP
#define UE4SS_SDK_GooCannon_AmmoCounter_HPP

class UGooCannon_AmmoCounter_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AmmoCritical;
    UImage* BG;
    UTextBlock* ClipCount;
    UTextBlock* TotalCount;
    UImage* WarningOverlay;
    int32 ActualClipCount;
    int32 AnimatedClipCount;
    FTimerHandle CountHandle;

    void UpdateClipCount(TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SetNumber_OutValue, int32 CallFunc_SetNumber_OutValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void UpdateAmmoCritical(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void SetNumber(int32 Value, UTextBlock* Label, int32& OutValue, FText CallFunc_Conv_IntToText_ReturnValue);
    void SetTotalCount(int32 Value);
    void Construct();
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_GooCannon_AmmoCounter(int32 EntryPoint, int32 K2Node_Event_value_1, int32 K2Node_Event_value, int32 CallFunc_SetNumber_OutValue);
}

#endif
