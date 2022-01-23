#ifndef UE4SS_SDK_HUD_Cro_GooCannon_HPP
#define UE4SS_SDK_HUD_Cro_GooCannon_HPP

class UHUD_Cro_GooCannon_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CA_Left1;
    class UImage* CA_Left2;
    class UImage* CA_Left3;
    class UImage* CA_Right1;
    class UImage* CA_Right2;
    class UImage* CA_Right3;
    class UImage* Center_Left;
    class UImage* Center_Right;
    class UImage* CH_Bottom;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight;
    class UImage* CH_FullTop;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* Charge1;
    class UImage* Charge2;
    class UImage* Charge3;
    class UImage* Charge4;
    class UImage* Charge5;
    class UImage* Charge6;
    class UImage* Dot;
    class UImage* Dot_1;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_4;
    class UImage* Image_5;
    class UImage* Image_6;
    class UImage* Image_7;
    class UImage* Image_8;
    class UImage* Image_1L;
    class UImage* Image_1r;
    class UImage* Image_2L;
    class UImage* Image_2R;
    class UImage* Image_3L;
    class UImage* Image_3R;
    class UImage* Image_4L;
    class UImage* Image_4R;
    class UImage* Outside;
    class APlayerCharacter* Character;
    FLinearColor ChargeProgressColor;

    void Construct();
    void SetData(class AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnChargeChanged(float charge);
    void ChargeEnd();
    void ExecuteUbergraph_HUD_Cro_GooCannon(int32 EntryPoint, FExecuteUbergraph_HUD_Cro_GooCannonK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AItem* K2Node_Event_item, bool K2Node_Event_IsDesignTime, class AGooGun* K2Node_DynamicCast_AsGoo_Gun, bool K2Node_DynamicCast_bSuccess, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, FLinearColor CallFunc_MenuColors_OutputColor, float K2Node_CustomEvent_charge, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_4, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_5, FExecuteUbergraph_HUD_Cro_GooCannonK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_Cro_GooCannonK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2);
};

#endif
