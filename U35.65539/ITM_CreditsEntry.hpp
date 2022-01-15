#ifndef UE4SS_SDK_ITM_CreditsEntry_HPP
#define UE4SS_SDK_ITM_CreditsEntry_HPP

class UITM_CreditsEntry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_Name;
    UTextBlock* DATA_Title;
    FText Title;
    FText Name;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CreditsEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FText CallFunc_TextToUpper_ReturnValue);
}

#endif
