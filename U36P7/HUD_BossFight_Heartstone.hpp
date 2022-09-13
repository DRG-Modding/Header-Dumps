#ifndef UE4SS_SDK_HUD_BossFight_Heartstone_HPP
#define UE4SS_SDK_HUD_BossFight_Heartstone_HPP

class UHUD_BossFight_Heartstone_C : public UHUD_BossFight_BaseEntry_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_Healthbar;
    class UImage* Image_316;
    class UImage* Image_401;
    class UITM_BossFightContainer_C* ITM_BossFightContainer;
    class UProgressBar* ProgressBar_Health_1;
    class UProgressBar* ProgressBar_Health_2;
    class UProgressBar* ProgressBar_Health_3;
    class UProgressBar* ProgressBar_Health_4;
    class AEscortDestination* Heartstone;
    class UEscortObjective* EscortObj;
    int32 CurrHealthBar;
    TArray<class UProgressBar*> HealthSegments;

    float CalcPercentage(float Progress, int32& CurrStage);
    void Construct();
    void OnProgressUpdated(float Progress);
    void OnBossRemoved(const TScriptInterface<class IBossFightInterface>& BossFight);
    void DeathFinished();
    void OnShellCracked(int32 numberOfShellsCracked);
    void ExecuteUbergraph_HUD_BossFight_Heartstone(int32 EntryPoint);
};

#endif
