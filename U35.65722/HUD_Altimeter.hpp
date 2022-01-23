#ifndef UE4SS_SDK_HUD_Altimeter_HPP
#define UE4SS_SDK_HUD_Altimeter_HPP

class UHUD_Altimeter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Border;
    class UTextBlock* DepthLabel;

    void SetDepth(int32 NewDepth, FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Construct();
    void DepthChanged(int32 Depth);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Altimeter(int32 EntryPoint, FExecuteUbergraph_HUD_AltimeterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 K2Node_CustomEvent_Depth, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
};

#endif
