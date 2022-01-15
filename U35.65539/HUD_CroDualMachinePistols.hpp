#ifndef UE4SS_SDK_HUD_CroDualMachinePistols_HPP
#define UE4SS_SDK_HUD_CroDualMachinePistols_HPP

class UHUD_CroDualMachinePistols_C : UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DotFade;
    UImage* CH_BottomLeft;
    UImage* CH_BottomRight;
    UImage* CH_FullLeft;
    UImage* CH_FullRight;
    UImage* CH_Left;
    UImage* CH_Right;
    APlayerCharacter* Character;
    UHitscanBaseComponent* HitscanComponent;

    void SetData(AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CroDualMachinePistols(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurrentHorizontalSpread_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AItem* K2Node_Event_item, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, bool K2Node_Event_IsDesignTime, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_MakeStruct_LinearColor_1);
}

#endif
