#ifndef UE4SS_SDK_HUD_HitIndicator_HPP
#define UE4SS_SDK_HUD_HitIndicator_HPP

class UHUD_HitIndicator_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HitAnim;
    class UImage* IndicatorImage;
    class UImage* KillImage;
    int32 CurrentPriority;

    void StartAnimation(int32 Priority, float Scale, FLinearColor Color, bool ShowKillImage, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select_Default_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void Construct();
    void OnHitAnimStarted();
    void OnHitAnimFinished();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_HitIndicator(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FExecuteUbergraph_HUD_HitIndicatorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, FExecuteUbergraph_HUD_HitIndicatorK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime);
};

#endif
