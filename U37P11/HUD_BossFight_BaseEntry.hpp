#ifndef UE4SS_SDK_HUD_BossFight_BaseEntry_HPP
#define UE4SS_SDK_HUD_BossFight_BaseEntry_HPP

class UHUD_BossFight_BaseEntry_C : public UBossFightWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBossFight BossFightInfo;

    void GetBossFight(FBossFight& BossFight);
    void OnCanTakeDamageChanged(bool OutCanTakeDamage);
    void OnDeath();
    void OnDisengaged();
    void OnHealthChanged(float Health);
    void Construct();
    void OnFightRemoved(const TScriptInterface<class IBossFightInterface>& BossFight);
    void Setup Invulnerability();
    void ExecuteUbergraph_HUD_BossFight_BaseEntry(int32 EntryPoint);
};

#endif
