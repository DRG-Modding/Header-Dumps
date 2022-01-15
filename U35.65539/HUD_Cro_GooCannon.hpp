#ifndef UE4SS_SDK_HUD_Cro_GooCannon_HPP
#define UE4SS_SDK_HUD_Cro_GooCannon_HPP

class UHUD_Cro_GooCannon_C : UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DotFade;
    UImage* CA_Left1;
    UImage* CA_Left2;
    UImage* CA_Left3;
    UImage* CA_Right1;
    UImage* CA_Right2;
    UImage* CA_Right3;
    UImage* Center_Left;
    UImage* Center_Right;
    UImage* CH_Bottom;
    UImage* CH_FullLeft;
    UImage* CH_FullRight;
    UImage* CH_FullTop;
    UImage* CH_Left;
    UImage* CH_Right;
    UImage* CH_Top;
    UImage* Charge1;
    UImage* Charge2;
    UImage* Charge3;
    UImage* Charge4;
    UImage* Charge5;
    UImage* Charge6;
    UImage* Dot;
    UImage* Dot_1;
    UImage* Image_1;
    UImage* Image_2;
    UImage* Image_4;
    UImage* Image_5;
    UImage* Image_6;
    UImage* Image_7;
    UImage* Image_8;
    UImage* Image_1L;
    UImage* Image_1r;
    UImage* Image_2L;
    UImage* Image_2R;
    UImage* Image_3L;
    UImage* Image_3R;
    UImage* Image_4L;
    UImage* Image_4R;
    UImage* Outside;
    APlayerCharacter* Character;
    FLinearColor ChargeProgressColor;

    void Construct();
    void SetData(AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnChargeChanged(float charge);
    void ChargeEnd();
    void ExecuteUbergraph_HUD_Cro_GooCannon(int32 EntryPoint, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AItem* K2Node_Event_item, bool K2Node_Event_IsDesignTime, UGooGun* K2Node_DynamicCast_AsGoo_Gun, bool K2Node_DynamicCast_bSuccess, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, FLinearColor CallFunc_MenuColors_OutputColor, float K2Node_CustomEvent_charge, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_4, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_5, ChargeChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ChargingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
}

#endif
