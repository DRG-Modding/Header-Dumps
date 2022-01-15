#ifndef UE4SS_SDK_HUD_CroLineCutter_HPP
#define UE4SS_SDK_HUD_CroLineCutter_HPP

class UHUD_CroLineCutter_C : UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DotFade;
    UImage* Bracket_Left;
    UImage* Bracket_Right;
    UImage* Image_0;
    UImage* Image_4;
    float OpacityHigh;
    APlayerCharacter* Character;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CroLineCutter(int32 EntryPoint, FLinearColor K2Node_MakeStruct_LinearColor, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, FLinearColor K2Node_MakeStruct_LinearColor_1, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
}

#endif
