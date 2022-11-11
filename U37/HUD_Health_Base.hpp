#ifndef UE4SS_SDK_HUD_Health_Base_HPP
#define UE4SS_SDK_HUD_Health_Base_HPP

class UHUD_Health_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PingPong;
    class UWidgetAnimation* BeginRegen;
    class UBorder* EndBorder;
    class UProgressBar* HealthBar;
    class UImage* IconImage;
    class UProgressBar* RegenBar;
    class UPlayerHealthComponent* HealthComponent;
    FSlateColor RegenTint;
    bool isRegenerating;
    float AlphaHealthbar;

    void CheckPingPongAnim();
    void SetAlphaHealthbar(float alpha);
    bool HasLowHealth();
    void HealthChanged(float Health);
    void Bind Health Component(class UPlayerHealthComponent* HealthComponent);
    void PreConstruct(bool IsDesignTime);
    void Set Health Pct(float InPercent);
    void Unbind Health Component();
    void Bind To Player(class APlayerCharacter* Player);
    void OnHealthRegeneratingChanged_Event(bool isRegenerating);
    void Unbind HealthChanged();
    void Unbind Regenerating Changed();
    void ExecuteUbergraph_HUD_Health_Base(int32 EntryPoint);
};

#endif
