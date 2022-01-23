#ifndef UE4SS_SDK_HUD_CroNewGrenadeLauncher_HPP
#define UE4SS_SDK_HUD_CroNewGrenadeLauncher_HPP

class UHUD_CroNewGrenadeLauncher_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* Bracket_Right;
    class UImage* Dot;
    class UImage* FocusHair_Bottom;
    class UImage* FocusHair_Left;
    class UImage* FocusHair_Right;
    class UImage* FocusHair_Top;
    class UImage* HP_Left;
    class UImage* HP_Right;
    class UNamedSlot* HyperCrosshairs;
    class UImage* Image_36;
    class UImage* Line10;
    class UImage* Line15;
    class UImage* Line20;
    class UImage* Line20-HV_L;
    class UImage* Line20-HV_R;
    class UImage* Line5;
    class UNamedSlot* PGLCrosshairs;
    float OpacityHigh;
    class APlayerCharacter* Character;
    bool IsHP;
    float OpacityLow;

    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void SwitchToHP();
    void SetData(class AItem* Item);
    void Construct();
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void ExecuteUbergraph_HUD_CroNewGrenadeLauncher(int32 EntryPoint, FLinearColor K2Node_MakeStruct_LinearColor, FExecuteUbergraph_HUD_CroNewGrenadeLauncherK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FLinearColor K2Node_MakeStruct_LinearColor_1, bool K2Node_Event_IsDesignTime, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, FLinearColor K2Node_MakeStruct_LinearColor_2, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AItem* K2Node_Event_item, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest);
};

#endif
