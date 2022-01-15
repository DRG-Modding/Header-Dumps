#ifndef UE4SS_SDK_HUD_Cro_BoltActionRifle_HPP
#define UE4SS_SDK_HUD_Cro_BoltActionRifle_HPP

class UHUD_Cro_BoltActionRifle_C : UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DotFade;
    UImage* Bracket_Left;
    UImage* Bracket_Right;
    UImage* CH_Bottom;
    UImage* CH_Left;
    UImage* CH_Right;
    UImage* CH_Top;
    UImage* Dot;
    UImage* Focus_Botom;
    UImage* Focus_Left;
    UImage* Focus_Right;
    UImage* Focus_Top;
    UImage* FocusHair_Bottom;
    UImage* FocusHair_Left;
    UImage* FocusHair_Right;
    UImage* FocusHair_Top;
    UNamedSlot* FocusHairs;
    UImage* GK2-markerL;
    UImage* GK2-markerR;
    UImage* Hair_Bottom;
    UImage* Hair_Left;
    UImage* Hair_Right;
    UImage* Hair_Top;
    float Opacity High;
    APlayerCharacter* Character;
    float Opacity Low;
    bool JustHit;
    float SpreadPositionMultiplier;
    float FocusSpreadPositionMultiplier;
    float Opacity Medium;

    void OnSpreadChange(float HorizontalSpread, float VerticalSpread, bool isAtRest, float CallFunc_FClamp_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, FVector2D CallFunc_MakeVector2D_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, FVector2D CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_8, FVector2D CallFunc_MakeVector2D_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_11, FVector2D CallFunc_MakeVector2D_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_12, FVector2D CallFunc_MakeVector2D_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_15, FVector2D CallFunc_MakeVector2D_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_16, FVector2D CallFunc_MakeVector2D_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_7);
    void Construct();
    void SetData(AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_Cro_BoltActionRifle(int32 EntryPoint, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AItem* K2Node_Event_item, bool K2Node_Event_IsDesignTime, UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor K2Node_MakeStruct_LinearColor_1, SpreadChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
