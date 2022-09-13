#ifndef UE4SS_SDK_ITM_Job_Section_Header_HPP
#define UE4SS_SDK_ITM_Job_Section_Header_HPP

class UITM_Job_Section_Header_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG_Gradient;
    class UTextBlock* TextBlock_Header;
    FText HeaderText;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Job_Section_Header(int32 EntryPoint);
};

#endif
