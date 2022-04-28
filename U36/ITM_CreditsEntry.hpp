#ifndef UE4SS_SDK_ITM_CreditsEntry_HPP
#define UE4SS_SDK_ITM_CreditsEntry_HPP

class UITM_CreditsEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_Name;
    class UTextBlock* DATA_Title;
    FText Title;
    FText Name;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CreditsEntry(int32 EntryPoint);
};

#endif
