#ifndef UE4SS_SDK_HUD_BossFight_Entry_HPP
#define UE4SS_SDK_HUD_BossFight_Entry_HPP

class UHUD_BossFight_Entry_C : UHUD_BossFight_BaseEntry_C
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
    FBossFight BossFightInfo_0;

    void GetBossFight(FBossFight& BossFight, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, USimpleBossFight* K2Node_DynamicCast_AsSimple_Boss_Fight, bool K2Node_DynamicCast_bSuccess);
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
    void ExecuteUbergraph_HUD_BossFight_Entry(int32 EntryPoint, OnDeathAnimFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UEnemyTemperatureReplicatorComponent* CallFunc_GetComponentByClass_ReturnValue, FloatDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, float K2Node_CustomEvent_floatValue, float CallFunc_GetTemperatureEffect_ReturnValue, TArray<UPawnAffliction*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, OnDisengagedAnimFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FText CallFunc_TextToUpper_ReturnValue);
}

#endif
