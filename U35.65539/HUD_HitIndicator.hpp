#ifndef UE4SS_SDK_HUD_HitIndicator_HPP
#define UE4SS_SDK_HUD_HitIndicator_HPP

class UHUD_HitIndicator_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* HitAnim;
    UImage* IndicatorImage;
    UImage* KillImage;
    int32 CurrentPriority;

    void StartAnimation(int32 Priority, float Scale, FLinearColor Color, bool ShowKillImage, bool Temp_bool_Variable, bool Temp_bool_Variable_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, UWidget* K2Node_Select_Default, UWidget* K2Node_Select_Default_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void Construct();
    void OnHitAnimStarted();
    void OnHitAnimFinished();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_HitIndicator(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime);
}

#endif
