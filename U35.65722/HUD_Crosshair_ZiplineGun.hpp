#ifndef UE4SS_SDK_HUD_Crosshair_ZiplineGun_HPP
#define UE4SS_SDK_HUD_Crosshair_ZiplineGun_HPP

class UHUD_Crosshair_ZiplineGun_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BottomArrow;
    class UImage* Dot;
    class UHUD_AngleIndicator_C* HUD_AngleIndicator_151;
    class UHUD_CrossHair_Basic02_C* HUD_Crosshair_Basic02;
    class UTextBlock* InfoLabel;
    class UImage* LineL;
    class UImage* LineR;
    class UImage* TopArrow;
    FLinearColor FailColor;
    FLinearColor BaseColor;

    void SetMinMaxAngle(float Min, float Max);
    void ClearMessage();
    void DistanceMessage(float Dist, bool InRange, bool Temp_bool_Variable, int32 CallFunc_Round_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FLinearColor K2Node_Select_Default, FText CallFunc_MakeLiteralText_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void FailMessage(FText Msg, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetText(FText Value, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, ESlateVisibility K2Node_Select_Default, FSlateColor K2Node_MakeStruct_SlateColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Crosshair_ZiplineGun(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
