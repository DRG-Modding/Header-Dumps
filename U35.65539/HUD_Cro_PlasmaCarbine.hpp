#ifndef UE4SS_SDK_HUD_Cro_PlasmaCarbine_HPP
#define UE4SS_SDK_HUD_Cro_PlasmaCarbine_HPP

class UHUD_Cro_PlasmaCarbine_C : UCrosshairWidget
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
    UImage* CH_BottomLine;
    UImage* CH_BottomLine_1;
    UImage* CH_FullBottom;
    UImage* CH_FullLeft;
    UImage* CH_FullRight;
    UImage* CH_FullTop;
    UImage* CH_Left;
    UImage* CH_LeftLine;
    UImage* CH_LeftLine_1;
    UImage* CH_Right;
    UImage* CH_RightLine;
    UImage* CH_RightLine_1;
    UImage* CH_Top;
    UImage* CH_TopLine;
    UImage* CH_TopLine_1;
    UImage* Dot;
    UImage* Outside;
    APlayerCharacter* Character;
    float OpacityLow;
    float OpacityHigh;

    void Construct();
    void SetData(AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_Cro_PlasmaCarbine(int32 EntryPoint, FLinearColor K2Node_MakeStruct_LinearColor, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AItem* K2Node_Event_item, bool K2Node_Event_IsDesignTime, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_MakeStruct_LinearColor_1, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_MakeStruct_LinearColor_2);
}

#endif
