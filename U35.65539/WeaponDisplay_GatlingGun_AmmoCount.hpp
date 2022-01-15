#ifndef UE4SS_SDK_WeaponDisplay_GatlingGun_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_GatlingGun_AmmoCount_HPP

class UWeaponDisplay_GatlingGun_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AmmoLow;
    UTextBlock* AmmoCount;
    UImage* Image_161;
    UImage* Image_163;
    UImage* Image_327;
    UProgressBar* ProgressBar_0;
    UTextBlock* TEXT_Low;
    UTextBlock* TEXT_Rounds;
    UTextBlock* TextBlock_156;
    UWidgetSwitcher* WidgetSwitcher_0;
    int32 CurrentClipCount;
    int32 TotalClipCount;
    int32 ClipCountTrailing;
    bool IsCounting;

    void AdjustPercentage(float CallFunc_Multiply_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void AnimateClipCount(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float K2Node_Select_Default, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Min_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 K2Node_Select_Default_1);
    void AdjustProgressBar(float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue);
    void SetClipCount(int32 Value);
    void Check AmmoLow();
    void SetTotalCount(int32 Value);
    void SetMaxAmmo(int32 Value);
    void Construct();
    void OnAmmoLowFinished();
    void ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 K2Node_Event_value_1, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Event_value, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 K2Node_Event_value_2, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
