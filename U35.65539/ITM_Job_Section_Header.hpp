#ifndef UE4SS_SDK_ITM_Job_Section_Header_HPP
#define UE4SS_SDK_ITM_Job_Section_Header_HPP

class UITM_Job_Section_Header_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BG_Gradient;
    UTextBlock* TextBlock_Header;
    FText HeaderText;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Job_Section_Header(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
