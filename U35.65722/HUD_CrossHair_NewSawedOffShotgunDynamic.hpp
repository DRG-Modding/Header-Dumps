#ifndef UE4SS_SDK_HUD_CrossHair_NewSawedOffShotgunDynamic_HPP
#define UE4SS_SDK_HUD_CrossHair_NewSawedOffShotgunDynamic_HPP

class UHUD_CrossHair_NewSawedOffShotgunDynamic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_78;
    class UImage* Image_79;
    class UNamedSlot* LeftCH;
    class UNamedSlot* RightCH;
    class UImage* Shell1A;
    class UImage* Shell1B;
    class UImage* Shell2A;
    class UImage* Shell2B;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;

    void PreConstruct(bool IsDesignTime);
    void SetData(class AAmmoDrivenWeapon* Weapon);
    void OnClipCountChanged(int32 Amount);
    void Construct();
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic(int32 EntryPoint, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamicK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamicK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FLinearColor K2Node_MakeStruct_LinearColor, FExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamicK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime, class AAmmoDrivenWeapon* K2Node_CustomEvent_Weapon, int32 K2Node_CustomEvent_Amount, class UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_MakeStruct_LinearColor_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1);
};

#endif
