#ifndef UE4SS_SDK_HUD_Health_Base_HPP
#define UE4SS_SDK_HUD_Health_Base_HPP

class UHUD_Health_Base_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* PingPong;
    UWidgetAnimation* BeginRegen;
    UBorder* EndBorder;
    UProgressBar* HealthBar;
    UImage* IconImage;
    UProgressBar* RegenBar;
    UPlayerHealthComponent* HealthComponent;
    FSlateColor RegenTint;
    bool isRegenerating;
    float AlphaHealthbar;

    void CheckPingPongAnim(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_HasLowHealth_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
    void SetAlphaHealthbar(float alpha, FLinearColor K2Node_MakeStruct_LinearColor, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush, FProgressBarStyle K2Node_MakeStruct_ProgressBarStyle);
    bool HasLowHealth(float CallFunc_GetHealthPct_ReturnValue, float CallFunc_GetHealthRegeneratingTargetRatio_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void HealthChanged(float Health);
    void Bind Health Component(UPlayerHealthComponent* HealthComponent);
    void PreConstruct(bool IsDesignTime);
    void Set Health Pct(float InPercent);
    void Unbind Health Component();
    void Bind To Player(UPlayerCharacter* Player);
    void OnHealthRegeneratingChanged_Event(bool isRegenerating);
    void Unbind HealthChanged();
    void Unbind Regenerating Changed();
    void ExecuteUbergraph_HUD_Health_Base(int32 EntryPoint, bool Temp_bool_Variable, UPlayerHealthComponent* Temp_object_Variable, HealthRegeneratingChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, float K2Node_CustomEvent_health, UPlayerHealthComponent* K2Node_CustomEvent_HealthComponent, HealthChangedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetHealthPct_ReturnValue, float CallFunc_GetHealthPct_ReturnValue_1, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_InPercent, UPlayerCharacter* K2Node_CustomEvent_player, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UPlayerHealthComponent* K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool K2Node_CustomEvent_isRegenerating, ESlateVisibility K2Node_Select_Default_1, float CallFunc_GetHealthRegeneratingTargetRatio_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
