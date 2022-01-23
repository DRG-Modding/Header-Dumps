#ifndef UE4SS_SDK_WeaponDisplay_Drill_Heat_HPP
#define UE4SS_SDK_WeaponDisplay_Drill_Heat_HPP

class UWeaponDisplay_Drill_Heat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Flash;
    class UImage* Image_88;
    class UImage* Image_131;
    class UTextBlock* TextBlock_440;
    class UTextBlock* TextBlock_HeatValue;

    void SetHeatValue(float HeatPercentage, bool Overheated);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_Drill_Heat(int32 EntryPoint, float K2Node_CustomEvent_HeatPercentage, bool K2Node_CustomEvent_Overheated, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
