#ifndef UE4SS_SDK_ITM_WarningWithPercent_HPP
#define UE4SS_SDK_ITM_WarningWithPercent_HPP

class UITM_WarningWithPercent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_Warning;
    class UImage* IconWarning;
    class UTextBlock* TextBlock_Warning;
    class UTexture2D* Icon;
    FText Title;
    float Bonus;

    void Construct();
    void ExecuteUbergraph_ITM_WarningWithPercent(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
