#ifndef UE4SS_SDK_HUD_Cro_LockOnRifle_HPP
#define UE4SS_SDK_HUD_Cro_LockOnRifle_HPP

class UHUD_Cro_LockOnRifle_C : UCrosshairWidget
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
    UImage* Focus_Botom;
    UImage* Focus_Left;
    UImage* Focus_Right;
    UImage* Focus_Top;
    UNamedSlot* Focussed_Regular;
    UNamedSlot* Focussed_Small;
    UImage* GK2-markerL;
    UImage* GK2-markerR;
    UImage* Hair_Bottom;
    UImage* Hair_Left;
    UImage* Hair_Right;
    UImage* Hair_Top;
    UImage* Image;
    UImage* Image_1;
    UImage* Image_4;
    UImage* Image_72;
    UUI_LockOn_Counter_C* LockOnCounter_Normal;
    UUI_LockOn_Counter_C* LockOnCounter_Small;
    UCanvasPanel* Normal;
    UUI_LockOn_Scanning_C* Scanning_Normal;
    UUI_LockOn_Scanning_C* Scanning_Small;
    USizeBox* SizeBox_Regular;
    USizeBox* SizeBox_Small;
    UWidgetSwitcher* WidgetSwitcher_Type;
    float Opacity High;
    APlayerCharacter* Character;
    float Opacity Low;
    bool JustHit;
    float SpreadPositionMultiplier;
    float FocusSpreadPositionMultiplier;
    ALockOnWeapon* Weapon;

    void OnSpreadChange(float HorizontalSpread, float VerticalSpread, bool isAtRest, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3);
    void Construct();
    void SetData(AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void LockingStarted_Event();
    void NoLongerFocussed();
    void OnUpgraded(AItem* Item);
    void OnLockingStopped();
    void ExecuteUbergraph_HUD_Cro_LockOnRifle(int32 EntryPoint, LockOnRifleLockingOnState__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AmmoDrivenGenericEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, LockOnRifleLockingOnState__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, AItem* K2Node_Event_item_1, bool K2Node_Event_IsDesignTime, ULockOnWeapon* K2Node_DynamicCast_AsLock_on_Weapon, bool K2Node_DynamicCast_bSuccess, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor K2Node_MakeStruct_LinearColor_1, SpreadChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_3, UWPN_LockOnRifle_C* K2Node_DynamicCast_AsWPN_Lock_on_Rifle, bool K2Node_DynamicCast_bSuccess_2, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, AItem* K2Node_Event_item);
}

#endif
