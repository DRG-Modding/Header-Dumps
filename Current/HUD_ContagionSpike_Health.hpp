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
    bool Initialized;
    bool FirstIntro;
    bool IsHealthbarVisible;

    void Finished_3ADA294E4411BFB7634E1DAAB2BF7E75();
    void Finished_7DCB89564DBC24AC88ED3CA4A6B0E489();
    void SetIsNearby(bool InIsNearby);
    void OnHealthChanged_Event_0(float Health);
    void RefreshHealth();
    void OnDeath_Event(class UHealthComponentBase* HealthComponent);
    void Try Init Health Bar();
    void OnStayVisibleTimeOut();
    void ExecuteUbergraph_HUD_ContagionSpike_Health(int32 EntryPoint);
};

#endif
