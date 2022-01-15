#ifndef UE4SS_SDK_HUD_CrosCryospray_HPP
#define UE4SS_SDK_HUD_CrosCryospray_HPP

class UHUD_CrosCryospray_C : UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DotFade;
    UImage* CH_ArrowLeft;
    UImage* CH_ArrowRight;
    UImage* CH_LeftBottom;
    UImage* CH_LeftTop;
    UImage* CH_RightTop;
    UImage* Dot;
    UImage* Image_1;
    float Opacity High;
    APlayerCharacter* Character;
    float Opacity Low;

    void SetData(AItem* Item);
    void Construct();
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CrosCryospray(int32 EntryPoint, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AItem* K2Node_Event_item, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, bool K2Node_Event_IsDesignTime, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
