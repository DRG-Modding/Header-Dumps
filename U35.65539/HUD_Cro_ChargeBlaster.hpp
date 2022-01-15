#ifndef UE4SS_SDK_HUD_Cro_ChargeBlaster_HPP
#define UE4SS_SDK_HUD_Cro_ChargeBlaster_HPP

class UHUD_Cro_ChargeBlaster_C : UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DotFade;
    UImage* CA_Down1;
    UImage* CA_Down2;
    UImage* CA_Down3;
    UImage* CA_Left1;
    UImage* CA_Left2;
    UImage* CA_Left3;
    UImage* CA_Right1;
    UImage* CA_Right2;
    UImage* CA_Right3;
    UImage* Center_Down;
    UImage* Center_Left;
    UImage* Center_Right;
    UImage* CH_Bottom;
    UImage* CH_FullLeft;
    UImage* CH_FullRight;
    UImage* CH_FullTop;
    UImage* CH_Left;
    UImage* CH_Right;
    UImage* CH_Top;
    UImage* Dot;
    UImage* Outside;
    APlayerCharacter* Character;

    void Construct();
    void SetData(AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnChargeChanged(float charge);
    void ExecuteUbergraph_HUD_Cro_ChargeBlaster(int32 EntryPoint, FLinearColor K2Node_MakeStruct_LinearColor, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ChargeChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, AItem* K2Node_Event_item, UChargedWeapon* K2Node_DynamicCast_AsCharged_Weapon, bool K2Node_DynamicCast_bSuccess, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, FLinearColor CallFunc_MenuColors_OutputColor, float K2Node_CustomEvent_charge, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2);
}

#endif
