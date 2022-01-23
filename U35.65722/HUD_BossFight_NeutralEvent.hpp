#ifndef UE4SS_SDK_HUD_BossFight_NeutralEvent_HPP
#define UE4SS_SDK_HUD_BossFight_NeutralEvent_HPP

class UHUD_BossFight_NeutralEvent_C : public UHUD_BossFight_BaseEntry_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ArmorFullAnim;
    class UWidgetAnimation* ArmorHitAnim;
    class UWidgetAnimation* HitAnim;
    class UHUD_EnemyTargeting_AfflictionBox_C* HUD_EnemyTargeting_AfflictionBox;
    class UHUD_EnemyTargeting_Temperature_C* HUD_EnemyTargeting_Temperature;
    class UITM_BossFightContainer_C* ITM_BossFightContainer;
    class UITM_SegmentedArmorBar_C* ITM_SegmentedArmorBar;
    class UITM_SegmentedHealthBar_C* ITM_SegmentedHealthBar;
    class UHorizontalBox* ShieldBox;
    class UEnemyTemperatureReplicatorComponent* TemperatureReplicator;

    void GetBossFight(FBossFight& BossFight, class AActor* CallFunc_GetBossActor_ReturnValue, class UEnemyComponent* CallFunc_GetComponentByClass_ReturnValue, class UEnemyHealthComponent* CallFunc_GetComponentByClass_ReturnValue_1, FBossFight K2Node_MakeStruct_BossFight);
    void OnCanTakeDamageChanged(bool OutCanTakeDamage, bool CallFunc_Not_PreBool_ReturnValue);
    void OnDisengaged();
    void OnDeath();
    void OnHealthChanged(float Health, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetTemperatureEffect(float InTempEffect, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void InternalSetPct(class UProgressBar* InHealthBar, class UProgressBar* InTrailingHealthBar, class UWidgetAnimation* InHitAnimation, float InPct, bool Reset, float OldPct, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void OnRemoveBossFight();
    void SetupTemperature();
    void OnTemperatureEffectChanged(float FloatValue);
    void ExecuteUbergraph_HUD_BossFight_NeutralEvent(int32 EntryPoint, FExecuteUbergraph_HUD_BossFight_NeutralEventK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UEnemyTemperatureReplicatorComponent* CallFunc_GetComponentByClass_ReturnValue, FExecuteUbergraph_HUD_BossFight_NeutralEventK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, float K2Node_CustomEvent_floatValue, float CallFunc_GetTemperatureEffect_ReturnValue, TArray<class UPawnAffliction*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, FExecuteUbergraph_HUD_BossFight_NeutralEventK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FText CallFunc_TextToUpper_ReturnValue);
};

#endif
