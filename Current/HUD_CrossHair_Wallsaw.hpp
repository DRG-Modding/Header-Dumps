#ifndef UE4SS_SDK_HUD_CrossHair_Wallsaw_HPP
#define UE4SS_SDK_HUD_CrossHair_Wallsaw_HPP

class UHUD_CrossHair_Wallsaw_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Dot;
    class UImage* LineLeft;
    class UImage* LineRight;
    class UTextBlock* TextBlock_351;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CrossHair_Wallsaw(int32 EntryPoint);
};

#endif
