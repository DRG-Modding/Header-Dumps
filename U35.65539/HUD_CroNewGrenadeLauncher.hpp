#ifndef UE4SS_SDK_HUD_CroNewGrenadeLauncher_HPP
#define UE4SS_SDK_HUD_CroNewGrenadeLauncher_HPP

class UHUD_CroNewGrenadeLauncher_C : UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DotFade;
    UImage* Bracket_Right;
    UImage* Dot;
    UImage* FocusHair_Bottom;
    UImage* FocusHair_Left;
    UImage* FocusHair_Right;
    UImage* FocusHair_Top;
    UImage* HP_Left;
    UImage* HP_Right;
    UNamedSlot* HyperCrosshairs;
    UImage* Image_36;
    UImage* Line10;
    UImage* Line15;
    UImage* Line20;
    UImage* Line20-HV_L;
    UImage* Line20-HV_R;
    UImage* Line5;
    UNamedSlot* PGLCrosshairs;
    float OpacityHigh;
    APlayerCharacter* Character;
    bool IsHP;
    float OpacityLow;

    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void SwitchToHP();
    void SetData(AItem* Item);
    void Construct();
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void ExecuteUbergraph_HUD_CroNewGrenadeLauncher(int32 EntryPoint, FLinearColor K2Node_MakeStruct_LinearColor, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FLinearColor K2Node_MakeStruct_LinearColor_1, bool K2Node_Event_IsDesignTime, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, FLinearColor K2Node_MakeStruct_LinearColor_2, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, AItem* K2Node_Event_item, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest);
}

#endif
