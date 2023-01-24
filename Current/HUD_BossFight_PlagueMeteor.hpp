#ifndef UE4SS_SDK_HUD_BossFight_PlagueMeteor_HPP
#define UE4SS_SDK_HUD_BossFight_PlagueMeteor_HPP

class UHUD_BossFight_PlagueMeteor_C : public UHUD_BossFight_BaseEntry_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_316;
    class UImage* Image_401;
    class UITM_BossFightContainer_C* ITM_BossFightContainer;
    class UProgressBar* ProgressBarHealth;
    class UEscortObjective* EscortObj;
    int32 CurrHealthBar;

    void Construct();
    void MeteorHealthChanged(float CurrentProgress);
    void OnBossRemoved(const TScriptInterface<class IBossFightInterface>& BossFight);
    void DeathFinished();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_BossFight_PlagueMeteor(int32 EntryPoint);
};

#endif
