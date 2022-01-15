#ifndef UE4SS_SDK_HUD_CrossHair_NewSawedOffShotgunDynamic_HPP
#define UE4SS_SDK_HUD_CrossHair_NewSawedOffShotgunDynamic_HPP

class UHUD_CrossHair_NewSawedOffShotgunDynamic_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_78;
    UImage* Image_79;
    UNamedSlot* LeftCH;
    UNamedSlot* RightCH;
    UImage* Shell1A;
    UImage* Shell1B;
    UImage* Shell2A;
    UImage* Shell2B;
    float Opacity High;
    APlayerCharacter* Character;
    float Opacity Low;

    void PreConstruct(bool IsDesignTime);
    void SetData(UAmmoDrivenWeapon* Weapon);
    void OnClipCountChanged(int32 Amount);
    void Construct();
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic(int32 EntryPoint, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, AmountChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FLinearColor K2Node_MakeStruct_LinearColor, SpreadChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime, UAmmoDrivenWeapon* K2Node_CustomEvent_Weapon, int32 K2Node_CustomEvent_Amount, UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_MakeStruct_LinearColor_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1);
}

#endif
