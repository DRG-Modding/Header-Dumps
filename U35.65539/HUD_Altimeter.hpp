#ifndef UE4SS_SDK_HUD_Altimeter_HPP
#define UE4SS_SDK_HUD_Altimeter_HPP

class UHUD_Altimeter_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Border;
    UTextBlock* DepthLabel;

    void SetDepth(int32 NewDepth, FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Construct();
    void DepthChanged(int32 Depth);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Altimeter(int32 EntryPoint, DepthSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 K2Node_CustomEvent_Depth, APawn* CallFunc_K2_GetPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
