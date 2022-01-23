#ifndef UE4SS_SDK_HUD_Cro_ChargeBlaster_HPP
#define UE4SS_SDK_HUD_Cro_ChargeBlaster_HPP

class UHUD_Cro_ChargeBlaster_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CA_Down1;
    class UImage* CA_Down2;
    class UImage* CA_Down3;
    class UImage* CA_Left1;
    class UImage* CA_Left2;
    class UImage* CA_Left3;
    class UImage* CA_Right1;
    class UImage* CA_Right2;
    class UImage* CA_Right3;
    class UImage* Center_Down;
    class UImage* Center_Left;
    class UImage* Center_Right;
    class UImage* CH_Bottom;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight;
    class UImage* CH_FullTop;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* Dot;
    class UImage* Outside;
    class APlayerCharacter* Character;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnChargeChanged(float charge);
    void ExecuteUbergraph_HUD_Cro_ChargeBlaster(int32 EntryPoint, FLinearColor K2Node_MakeStruct_LinearColor, FExecuteUbergraph_HUD_Cro_ChargeBlasterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_Cro_ChargeBlasterK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class AItem* K2Node_Event_item, class AChargedWeapon* K2Node_DynamicCast_AsCharged_Weapon, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, FLinearColor CallFunc_MenuColors_OutputColor, float K2Node_CustomEvent_charge, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2);
};

#endif
