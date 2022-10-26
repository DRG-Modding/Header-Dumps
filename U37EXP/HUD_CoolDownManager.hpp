#ifndef UE4SS_SDK_HUD_CoolDownManager_HPP
#define UE4SS_SDK_HUD_CoolDownManager_HPP

class UHUD_CoolDownManager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_CooldownWidget_C* CooldownWidget_2;
    class UHUD_CooldownWidget_C* CooldownWidget_C_3;
    class UHUD_CooldownWidget_C* CooldownWidget_C_4;
    class UHUD_CooldownWidget_C* CooldownWidget_C_5;
    class UVerticalBox* IconBox;

    void GetOrCreateWidget(class UObject* CoolDownOwner, const FCoolDownProgressStyle& CoolDownStyle, class UCoolDownProgressWidget*& Widget);
    void Construct();
    void OnCoolDownProgress_Event(class UObject* CoolDownObject, const FCoolDownProgressStyle& Style, float Progress);
    void ExecuteUbergraph_HUD_CoolDownManager(int32 EntryPoint);
};

#endif
