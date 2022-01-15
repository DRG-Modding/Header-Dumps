#ifndef UE4SS_SDK_HUD_Progressbar_Hacking_Base_HPP
#define UE4SS_SDK_HUD_Progressbar_Hacking_Base_HPP

class UHUD_Progressbar_Hacking_Base_C : UHUD_BossFight_BaseEntry_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ArmorFullAnim;
    UWidgetAnimation* ArmorHitAnim;
    UWidgetAnimation* HitAnim;
    UITM_BossFightContainer_C* ITM_BossFightContainer;
    UProgressBar* ProgressBar_Main;
    UEnemyTemperatureReplicatorComponent* TemperatureReplicator;
    FTimerHandle HealthRefreshHandler;
    bool KillCue;
    AFacilityHackingPod* ListenPod;
    FText HackingText;
    FText BrokenConnectionText;
    FText RebootText;

    void Construct();
    void OnRemoveBossFight();
    void OnFightRemoved(const InterfaceProperty& BossFight);
    void OnProgress(float hackProgress);
    void PreConstruct(bool IsDesignTime);
    void UpdateBarState(EHackingPodState State);
    void SetListenPod(UFacilityHackingPod* Pod);
    void ExecuteUbergraph_HUD_Progressbar_Hacking_Base(int32 EntryPoint, OnDeathAnimFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, HackingPod_Delegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, EHackingPodState CallFunc_GetState_ReturnValue, const InterfaceProperty K2Node_CustomEvent_BossFight, OnDisengagedAnimFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, AActor* CallFunc_GetBossActor_ReturnValue, AActor* CallFunc_GetBossActor_ReturnValue_1, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_DynamicCast_AsBP_Facility_Power_Station_Generator_Base, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_hackProgress, AActor* CallFunc_GetBossActor_ReturnValue_2, UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, Hackprogress_Delegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, EHackingPodState K2Node_CustomEvent_State, bool K2Node_SwitchEnum_CmpSuccess, FLinearColor CallFunc_MenuColors_OutputColor_3, UFacilityHackingPod* K2Node_CustomEvent_Pod, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, BossFightDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4);
}

#endif
