#ifndef UE4SS_SDK_HUD_Cro_LockOnRifle_HPP
#define UE4SS_SDK_HUD_Cro_LockOnRifle_HPP

class UHUD_Cro_LockOnRifle_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* Bracket_Left;
    class UImage* Bracket_Right;
    class UImage* CH_Bottom;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* Dot;
    class UImage* Focus_Botom;
    class UImage* Focus_Left;
    class UImage* Focus_Right;
    class UImage* Focus_Top;
    class UNamedSlot* Focussed_Regular;
    class UNamedSlot* Focussed_Small;
    class UImage* GK2-markerL;
    class UImage* GK2-markerR;
    class UImage* Hair_Bottom;
    class UImage* Hair_Left;
    class UImage* Hair_Right;
    class UImage* Hair_Top;
    class UImage* Image;
    class UImage* Image_1;
    class UImage* Image_4;
    class UImage* Image_72;
    class UUI_LockOn_Counter_C* LockOnCounter_Normal;
    class UUI_LockOn_Counter_C* LockOnCounter_Small;
    class UCanvasPanel* Normal;
    class UUI_LockOn_Scanning_C* Scanning_Normal;
    class UUI_LockOn_Scanning_C* Scanning_Small;
    class USizeBox* SizeBox_Regular;
    class USizeBox* SizeBox_Small;
    class UWidgetSwitcher* WidgetSwitcher_Type;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;
    bool JustHit;
    float SpreadPositionMultiplier;
    float FocusSpreadPositionMultiplier;
    class ALockOnWeapon* Weapon;

    void OnSpreadChange(float HorizontalSpread, float VerticalSpread, bool isAtRest, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3);
    void Construct();
    void SetData(class AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void LockingStarted_Event();
    void NoLongerFocussed();
    void OnUpgraded(class AItem* Item);
    void OnLockingStopped();
    void ExecuteUbergraph_HUD_Cro_LockOnRifle(int32 EntryPoint, FExecuteUbergraph_HUD_Cro_LockOnRifleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_Cro_LockOnRifleK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_Cro_LockOnRifleK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class AItem* K2Node_Event_item_1, bool K2Node_Event_IsDesignTime, class ALockOnWeapon* K2Node_DynamicCast_AsLock_on_Weapon, bool K2Node_DynamicCast_bSuccess, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor K2Node_MakeStruct_LinearColor_1, FExecuteUbergraph_HUD_Cro_LockOnRifleK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_3, class AWPN_LockOnRifle_C* K2Node_DynamicCast_AsWPN_Lock_on_Rifle, bool K2Node_DynamicCast_bSuccess_2, FExecuteUbergraph_HUD_Cro_LockOnRifleK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class AItem* K2Node_Event_item);
};

#endif
