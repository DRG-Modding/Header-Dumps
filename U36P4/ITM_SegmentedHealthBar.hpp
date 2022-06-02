#ifndef UE4SS_SDK_ITM_SegmentedHealthBar_HPP
#define UE4SS_SDK_ITM_SegmentedHealthBar_HPP

class UITM_SegmentedHealthBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_2;
    class UImage* ICON_Armor;
    class UITM_HealthBarSection_C* ITM_HealthBarSection1;
    class UITM_HealthBarSection_C* ITM_HealthBarSection2;
    class UITM_HealthBarSection_C* ITM_HealthBarSection3;
    class UHorizontalBox* SegmentHolder;
    class UHealthComponent* HealthComponent;
    TArray<class UITM_HealthBarSection_C*> Sections;
    bool IsSegmented;

    void SetData(class UHealthComponent* HealthComponent);
    void OnNewHealthSegment(int32 currSegment, int32 prevSegment);
    void PreConstruct(bool IsDesignTime);
    void AddSection(bool AddLeftPadding);
    void SetInvulnerability(bool IsInvulnerability);
    void OnHeal(float Amount);
    void OnDamage(float Amount);
    void ExecuteUbergraph_ITM_SegmentedHealthBar(int32 EntryPoint);
};

#endif
