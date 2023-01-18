#ifndef UE4SS_SDK_HUD_CrossHair_Crossbow_HPP
#define UE4SS_SDK_HUD_CrossHair_Crossbow_HPP

class UHUD_CrossHair_Crossbow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Dot;
    class UImage* Line2Left;
    class UImage* Line2Right;
    class UImage* Line3Left;
    class UImage* Line3Right;
    class UImage* LineLeft;
    class UImage* LineRight;
    class UImage* LineTop;
    class UTextBlock* TextBlock_351;
    class UUI_ProgressBar_C* UI_ProgressBar;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void UpdateRecallProgress(float Progress);
    void ExecuteUbergraph_HUD_CrossHair_Crossbow(int32 EntryPoint);
};

#endif
