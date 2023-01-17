#ifndef UE4SS_SDK_OnScreen_BoscoRevivesCounter_HPP
#define UE4SS_SDK_OnScreen_BoscoRevivesCounter_HPP

class UOnScreen_BoscoRevivesCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_BoscoAmmoRefillsLable_C* HUD_BoscoAmmoRefillsLable;
    class UHUD_BoscoRevivesLable_C* HUD_BoscoRevivesLable;

    void SetViewAmmoCounter(bool ViewAmmo);
    void Construct();
    void ExecuteUbergraph_OnScreen_BoscoRevivesCounter(int32 EntryPoint);
};

#endif
