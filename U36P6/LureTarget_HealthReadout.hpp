#ifndef UE4SS_SDK_LureTarget_HealthReadout_HPP
#define UE4SS_SDK_LureTarget_HealthReadout_HPP

class ULureTarget_HealthReadout_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_121;

    void SetText(FText Text);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LureTarget_HealthReadout(int32 EntryPoint);
};

#endif
