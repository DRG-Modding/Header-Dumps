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
    void ExecuteUbergraph_HUD_Progressbar_Hacking_Base(int32 EntryPoint, FExecuteUbergraph_HUD_Progressbar_Hacking_BaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_Progressbar_Hacking_BaseK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, EHackingPodState CallFunc_GetState_ReturnValue, const TScriptInterface<class IBossFightInterface> K2Node_CustomEvent_BossFight, FExecuteUbergraph_HUD_Progressbar_Hacking_BaseK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetBossActor_ReturnValue, class AActor* CallFunc_GetBossActor_ReturnValue_1, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_DynamicCast_AsBP_Facility_Power_Station_Generator_Base, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_hackProgress, class AActor* CallFunc_GetBossActor_ReturnValue_2, class UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FExecuteUbergraph_HUD_Progressbar_Hacking_BaseK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, EHackingPodState K2Node_CustomEvent_State, bool K2Node_SwitchEnum_CmpSuccess, FLinearColor CallFunc_MenuColors_OutputColor_3, class AFacilityHackingPod* K2Node_CustomEvent_Pod, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FExecuteUbergraph_HUD_Progressbar_Hacking_BaseK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4);
};

#endif
