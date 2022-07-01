#ifndef UE4SS_SDK_UI_MicroMissileLauncher_Charge_HPP
#define UE4SS_SDK_UI_MicroMissileLauncher_Charge_HPP

class UUI_MicroMissileLauncher_Charge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimCharged;
    class UImage* Background;
    class UImage* Charged;
    bool On;

    void PreConstruct(bool IsDesignTime);
    void SetOn(bool InOn);
    void ExecuteUbergraph_UI_MicroMissileLauncher_Charge(int32 EntryPoint);
};

#endif
