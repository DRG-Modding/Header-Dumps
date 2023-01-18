#ifndef UE4SS_SDK_HUD_CrossHair_NewSawedOffShotgunDynamic_HPP
#define UE4SS_SDK_HUD_CrossHair_NewSawedOffShotgunDynamic_HPP

class UHUD_CrossHair_NewSawedOffShotgunDynamic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_78;
    class UImage* Image_79;
    class UNamedSlot* LeftCH;
    class UNamedSlot* RightCH;
    class UImage* Shell1A;
    class UImage* Shell1B;
    class UImage* Shell2A;
    class UImage* Shell2B;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;

    void PreConstruct(bool IsDesignTime);
    void SetData(class AAmmoDrivenWeapon* Weapon);
    void OnClipCountChanged(int32 Amount);
    void Construct();
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic(int32 EntryPoint);
};

#endif
