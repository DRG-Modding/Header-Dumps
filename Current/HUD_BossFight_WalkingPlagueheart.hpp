#ifndef UE4SS_SDK_HUD_BossFight_WalkingPlagueheart_HPP
#define UE4SS_SDK_HUD_BossFight_WalkingPlagueheart_HPP

class UHUD_BossFight_WalkingPlagueheart_C : public UHUD_BossFight_BaseEntry_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ArmorFullAnim;
    class UWidgetAnimation* ArmorHitAnim;
    class UWidgetAnimation* HitAnim;
    class UBorder* Border;
    class UBorder* Border_3;
    class UHUD_EnemyTargeting_AfflictionBox_C* HUD_EnemyTargeting_AfflictionBox;
    class UHUD_EnemyTargeting_Temperature_C* HUD_EnemyTargeting_Temperature;
    class UImage* ICON_Armor;
    class UImage* ICON_Armor_1;
    class UITM_BossFightContainer_C* ITM_BossFightContainer;
    class UITM_SegmentedHealthBar_C* ITM_SegmentedHealthBar;
    class UHorizontalBox* SegmentHolder;
    class UHorizontalBox* SegmentHolder_1;
    class UITM_HealthBarSection_C* Shield1Layer1;
    class UITM_HealthBarSection_C* Shield1Layer2;
    class UITM_HealthBarSection_C* Shield2Layer1;
    class UITM_HealthBarSection_C* Shield2Layer2;
    class UITM_HealthBarSection_C* Shield3Layer1;
    class UITM_HealthBarSection_C* Shield3Layer2;
    class UHorizontalBox* ShieldBox;
    class UHorizontalBox* ShieldBox_1;
    class UEnemyTemperatureReplicatorComponent* TemperatureReplicator;
    class AENE_WalkingPlagueheart_C* WalkingPlagueheart;
    TArray<class UITM_HealthBarSection_C*> ShieldHealths;

    void UpdateFromShields(TArray<class ABP_PlagueHeartShield_Base_C*>& Shields);
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
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_BossFight_WalkingPlagueheart(int32 EntryPoint);
};

#endif
