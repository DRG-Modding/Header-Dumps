#ifndef UE4SS_SDK_UI_FPS_HPP
#define UE4SS_SDK_UI_FPS_HPP

class UUI_FPS_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_FPS;
    FSlateFontInfo Font;
    TEnumAsByte<ETextJustify::Type> Justification;
    float SmoothedDeltaT;

    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnShowFPSChanged(bool NewValue);
    void ExecuteUbergraph_UI_FPS(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, BoolConfigChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Lerp_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool K2Node_CustomEvent_NewValue, bool CallFunc_GetShowFPS_ReturnValue, ESlateVisibility K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
}

#endif
