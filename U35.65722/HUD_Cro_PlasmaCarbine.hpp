#ifndef UE4SS_SDK_HUD_Cro_PlasmaCarbine_HPP
#define UE4SS_SDK_HUD_Cro_PlasmaCarbine_HPP

class UHUD_Cro_PlasmaCarbine_C : public UCrosshairWidget
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
    class UImage* CH_BottomLine;
    class UImage* CH_BottomLine_1;
    class UImage* CH_FullBottom;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight;
    class UImage* CH_FullTop;
    class UImage* CH_Left;
    class UImage* CH_LeftLine;
    class UImage* CH_LeftLine_1;
    class UImage* CH_Right;
    class UImage* CH_RightLine;
    class UImage* CH_RightLine_1;
    class UImage* CH_Top;
    class UImage* CH_TopLine;
    class UImage* CH_TopLine_1;
    class UImage* Dot;
    class UImage* Outside;
    class APlayerCharacter* Character;
    float OpacityLow;
    float OpacityHigh;

    void Construct();
    void SetData(class AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_Cro_PlasmaCarbine(int32 EntryPoint, FLinearColor K2Node_MakeStruct_LinearColor, FExecuteUbergraph_HUD_Cro_PlasmaCarbineK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AItem* K2Node_Event_item, bool K2Node_Event_IsDesignTime, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_MakeStruct_LinearColor_1, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_MakeStruct_LinearColor_2);
};

#endif
