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
    void ExecuteUbergraph_ITM_WarningWithPercent(int32 EntryPoint);
};

#endif
