#ifndef UE4SS_SDK_HUD_CrossHair_Boomerang_HPP
#define UE4SS_SDK_HUD_CrossHair_Boomerang_HPP

class UHUD_CrossHair_Boomerang_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Dot;
    class UImage* LineLeft;
    class UImage* LineRight;
    class UTextBlock* TextBlock_351;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CrossHair_Boomerang(int32 EntryPoint);
};

#endif
