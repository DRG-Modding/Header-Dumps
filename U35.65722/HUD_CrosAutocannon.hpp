#ifndef UE4SS_SDK_HUD_CrosAutocannon_HPP
#define UE4SS_SDK_HUD_CrosAutocannon_HPP

class UHUD_CrosAutocannon_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CH_LeftBottom;
    class UImage* CH_LeftTop;
    class UImage* CH_RightBottom;
    class UImage* CH_RightTop;
    class UImage* Dot;
    class UImage* Line_Left;
    class UImage* Line_Right;
    class UImage* Line_TOp;
    class UImage* LineBottom;
    float Opacity High;
    float Opacity Low;
    float SpreadMultiplier;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnUpgraded(class AItem* Item);
    void ExecuteUbergraph_HUD_CrosAutocannon(int32 EntryPoint, class AItem* K2Node_Event_item, class UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetCurrentVerticalSpread_ReturnValue, FExecuteUbergraph_HUD_CrosAutocannonK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetCurrentHorizontalSpread_ReturnValue, FExecuteUbergraph_HUD_CrosAutocannonK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AItem* K2Node_Event_item_1, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, class UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, bool K2Node_Event_IsDesignTime, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_9, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_11, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_12, float CallFunc_Multiply_FloatFloat_ReturnValue_13, FVector2D CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_15, FVector2D CallFunc_MakeVector2D_ReturnValue_3);
};

#endif
