#ifndef UE4SS_SDK_HUD_BossFight_NeutralEvent_HPP
#define UE4SS_SDK_HUD_BossFight_NeutralEvent_HPP

class UHUD_BossFight_NeutralEvent_C : UHUD_BossFight_BaseEntry_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ArmorFullAnim;
    UWidgetAnimation* ArmorHitAnim;
    UWidgetAnimation* HitAnim;
    UHUD_EnemyTargeting_AfflictionBox_C* HUD_EnemyTargeting_AfflictionBox;
    UHUD_EnemyTargeting_Temperature_C* HUD_EnemyTargeting_Temperature;
    UITM_BossFightContainer_C* ITM_BossFightContainer;
    UITM_SegmentedArmorBar_C* ITM_SegmentedArmorBar;
    UITM_SegmentedHealthBar_C* ITM_SegmentedHealthBar;
    UHorizontalBox* ShieldBox;
    UEnemyTemperatureReplicatorComponent* TemperatureReplicator;

    void GetBossFight(FBossFight& BossFight, AActor* CallFunc_GetBossActor_ReturnValue, UEnemyComponent* CallFunc_GetComponentByClass_ReturnValue, UEnemyHealthComponent* CallFunc_GetComponentByClass_ReturnValue_1, FBossFight K2Node_MakeStruct_BossFight);
    void OnCanTakeDamageChanged(bool OutCanTakeDamage, bool CallFunc_Not_PreBool_ReturnValue);
    void OnDisengaged();
    void OnDeath();
    void OnHealthChanged(float Health, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetTemperatureEffect(float InTempEffect, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void InternalSetPct(UProgressBar* InHealthBar, UProgressBar* InTrailingHealthBar, UWidgetAnimation* InHitAnimation, float InPct, bool Reset, float OldPct, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void OnRemoveBossFight();
    void SetupTemperature();
    void OnTemperatureEffectChanged(float FloatValue);
    void ExecuteUbergraph_HUD_BossFight_NeutralEvent(int32 EntryPoint, OnDeathAnimFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UEnemyTemperatureReplicatorComponent* CallFunc_GetComponentByClass_ReturnValue, FloatDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, float K2Node_CustomEvent_floatValue, float CallFunc_GetTemperatureEffect_ReturnValue, TArray<UPawnAffliction*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, OnDisengagedAnimFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FText CallFunc_TextToUpper_ReturnValue);
}

#endif
