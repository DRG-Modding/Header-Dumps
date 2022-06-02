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

    void GetBossFight(FBossFight& BossFight);
    void OnCanTakeDamageChanged(bool OutCanTakeDamage);
    void OnDisengaged();
    void OnDeath();
    void OnHealthChanged(float Health);
    void SetTemperatureEffect(float InTempEffect);
    void InternalSetPct(class UProgressBar* InHealthBar, class UProgressBar* InTrailingHealthBar, class UWidgetAnimation* InHitAnimation, float InPct, bool Reset);
    void Construct();
    void OnRemoveBossFight();
    void SetupTemperature();
    void OnTemperatureEffectChanged(float FloatValue);
    void ExecuteUbergraph_HUD_BossFight_NeutralEvent(int32 EntryPoint);
};

#endif
