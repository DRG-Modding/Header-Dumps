#ifndef UE4SS_SDK_HUD_Progressbar_Hacking_Base_HPP
#define UE4SS_SDK_HUD_Progressbar_Hacking_Base_HPP

class UHUD_Progressbar_Hacking_Base_C : public UHUD_BossFight_BaseEntry_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ArmorFullAnim;
    class UWidgetAnimation* ArmorHitAnim;
    class UWidgetAnimation* HitAnim;
    class UITM_BossFightContainer_C* ITM_BossFightContainer;
    class UProgressBar* ProgressBar_Main;
    class UEnemyTemperatureReplicatorComponent* TemperatureReplicator;
    FTimerHandle HealthRefreshHandler;
    bool KillCue;
    class AFacilityHackingPod* ListenPod;
    FText HackingText;
    FText BrokenConnectionText;
    FText RebootText;

    void Construct();
    void OnRemoveBossFight();
    void OnFightRemoved(const TScriptInterface<class IBossFightInterface>& BossFight);
    void OnProgress(float hackProgress);
    void PreConstruct(bool IsDesignTime);
    void UpdateBarState(EHackingPodState State);
    void SetListenPod(class AFacilityHackingPod* Pod);
    void ExecuteUbergraph_HUD_Progressbar_Hacking_Base(int32 EntryPoint);
};

#endif
