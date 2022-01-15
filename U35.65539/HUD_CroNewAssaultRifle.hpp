#ifndef UE4SS_SDK_HUD_CroNewAssaultRifle_HPP
#define UE4SS_SDK_HUD_CroNewAssaultRifle_HPP

class UHUD_CroNewAssaultRifle_C : UCrosshairWidget
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
    float Opacity High;
    APlayerCharacter* Character;
    float Opacity Low;

    void Construct();
    void SetData(AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CroNewAssaultRifle(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, SpreadChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, AItem* K2Node_Event_item, UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor K2Node_MakeStruct_LinearColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
}

#endif
