#ifndef UE4SS_SDK_HUD_CroLineCutter_HPP
#define UE4SS_SDK_HUD_CroLineCutter_HPP

class UHUD_CroLineCutter_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* Bracket_Left;
    class UImage* Bracket_Right;
    class UImage* Image_0;
    class UImage* Image_4;
    float OpacityHigh;
    class APlayerCharacter* Character;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CroLineCutter(int32 EntryPoint, FLinearColor K2Node_MakeStruct_LinearColor, FExecuteUbergraph_HUD_CroLineCutterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, FLinearColor K2Node_MakeStruct_LinearColor_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
};

#endif
