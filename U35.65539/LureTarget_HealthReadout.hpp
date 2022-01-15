#ifndef UE4SS_SDK_LureTarget_HealthReadout_HPP
#define UE4SS_SDK_LureTarget_HealthReadout_HPP

class ULureTarget_HealthReadout_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_121;

    void SetText(FText Text, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LureTarget_HealthReadout(int32 EntryPoint, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
