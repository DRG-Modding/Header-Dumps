#ifndef UE4SS_SDK_ITM_MenuDamageIndicator_HPP
#define UE4SS_SDK_ITM_MenuDamageIndicator_HPP

class UITM_MenuDamageIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DamageTaken;
    class UImage* Image_Damage;
    class UUserWidget* Menu;

    void PreConstruct(bool IsDesignTime);
    void OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void OnAnimFinished();
    void SetMenu(class UUserWidget* EscapeMenu);
    void ExecuteUbergraph_ITM_MenuDamageIndicator(int32 EntryPoint);
};

#endif
