#ifndef UE4SS_SDK_HUD_CrosNewMinigun_HPP
#define UE4SS_SDK_HUD_CrosNewMinigun_HPP

class UHUD_CrosNewMinigun_C : UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DotFade;
    UImage* CH_Bottom;
    UImage* CH_Left;
    UImage* CH_Right;
    UImage* CH_Top;
    UImage* Dot;
    float OpacityHigh;
    APlayerCharacter* Character;
    float Opacity Low;

    void SetData(AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CrosNewMinigun(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, SpreadChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FLinearColor K2Node_MakeStruct_LinearColor, AItem* K2Node_Event_item, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, bool K2Node_Event_IsDesignTime, FLinearColor K2Node_MakeStruct_LinearColor_1, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
}

#endif
