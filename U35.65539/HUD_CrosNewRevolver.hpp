#ifndef UE4SS_SDK_HUD_CrosNewRevolver_HPP
#define UE4SS_SDK_HUD_CrosNewRevolver_HPP

class UHUD_CrosNewRevolver_C : UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* CH_Bottom;
    UImage* CH_FullLeft;
    UImage* CH_FullRight;
    UImage* CH_Left;
    UImage* CH_Right;
    float OpacityLow;
    APlayerCharacter* Character;
    float OpacityHigh;

    void Construct();
    void SetData(AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CrosNewRevolver(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, SpreadChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FLinearColor K2Node_MakeStruct_LinearColor, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, AItem* K2Node_Event_item, UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, bool K2Node_Event_IsDesignTime, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_2, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor K2Node_MakeStruct_LinearColor_1);
}

#endif
