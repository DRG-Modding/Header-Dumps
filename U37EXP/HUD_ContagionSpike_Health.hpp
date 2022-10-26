#ifndef UE4SS_SDK_HUD_ContagionSpike_Health_HPP
#define UE4SS_SDK_HUD_ContagionSpike_Health_HPP

class UHUD_ContagionSpike_Health_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFirstIntro;
    class UWidgetAnimation* AnimDeath;
    class UWidgetAnimation* AnimIntro;
    class UBasic_Label_C* Header;
    class UUI_ContagionSpike_HealthBar_C* HealthBar;
    class UImage* RedGlow;
    class UBasic_HUD_BracketWindowBig_Single_C* Window;
    class UHealthComponentBase* HealthComponent;
    class UObjectInfoComponent* InfoComponent;
    FTimerHandle DelayHandle;
    bool AddedToHUD;
    bool FirstIntro;

    void RemoveFromHUD();
    void AddToHUD();
    void Finished_3ADA294E4411BFB7634E1DAAB2BF7E75();
    void Construct();
    void SetIsNearby(bool InIsNearby);
    void OnHealthChanged_Event_0(float Health);
    void RefreshHealth();
    void OnDeath_Event(class UHealthComponentBase* HealthComponent);
    void OnPlayIntroAudio();
    void OnHide();
    void OnPlayOutroAudio();
    void ExecuteUbergraph_HUD_ContagionSpike_Health(int32 EntryPoint);
};

#endif
