#ifndef UE4SS_SDK_WeaponDisplay_Drill_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_Drill_AmmoCount_HPP

class UWeaponDisplay_Drill_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AmmoCount;
    class UProgressBar* AmmoProgressBar;
    class UImage* Image_87;
    class UImage* Image_246;
    int32 CurrentClipCount;
    int32 TotalClipCount;

    void AdjustProgressBar(int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue);
    void SetClipCount(int32 Value);
    void SetTotalCount(int32 Value);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount(int32 EntryPoint, int32 K2Node_Event_value_1, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 K2Node_Event_value, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
