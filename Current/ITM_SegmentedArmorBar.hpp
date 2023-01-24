#ifndef UE4SS_SDK_ITM_SegmentedArmorBar_HPP
#define UE4SS_SDK_ITM_SegmentedArmorBar_HPP

class UITM_SegmentedArmorBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_3;
    class UImage* ICON_Armor;
    class UITM_HealthBarSection_C* ITM_HealthBarSection1;
    class UITM_HealthBarSection_C* ITM_HealthBarSection2;
    class UITM_HealthBarSection_C* ITM_HealthBarSection3;
    class UHorizontalBox* SegmentHolder;
    class AActor* enemy;
    class UEnemyHealthComponent* EnemyHealth;
    TArray<class UITM_HealthBarSection_C*> Sections;
    TArray<class USubHealthComponent*> SubHealthComps;

    void SetData(class AActor* ArmoredEnemy, class UEnemyHealthComponent* EnemyHealth);
    void AddSection(bool AddLeftPadding, class USubHealthComponent* Health);
    void PreConstruct(bool IsDesignTime);
    void SetInvulnerability(bool IsInvulnerability);
    void OnSubHealthDamageTaken(float Health);
    void OnSubHealthCanTakeDamage(class USubHealthComponent* subHealth);
    void ExecuteUbergraph_ITM_SegmentedArmorBar(int32 EntryPoint);
};

#endif
