#ifndef UE4SS_SDK_HUD_Cro_BoltActionRifle_HPP
#define UE4SS_SDK_HUD_Cro_BoltActionRifle_HPP

class UHUD_Cro_BoltActionRifle_C : public UCrosshairWidget
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
    class UImage* FocusHair_Bottom;
    class UImage* FocusHair_Left;
    class UImage* FocusHair_Right;
    class UImage* FocusHair_Top;
    class UNamedSlot* FocusHairs;
    class UImage* GK2-markerL;
    class UImage* GK2-markerR;
    class UImage* Hair_Bottom;
    class UImage* Hair_Left;
    class UImage* Hair_Right;
    class UImage* Hair_Top;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;
    bool JustHit;
    float SpreadPositionMultiplier;
    float FocusSpreadPositionMultiplier;
    float Opacity Medium;

    void OnSpreadChange(float HorizontalSpread, float VerticalSpread, bool isAtRest, float CallFunc_FClamp_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, FVector2D CallFunc_MakeVector2D_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, FVector2D CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_8, FVector2D CallFunc_MakeVector2D_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_11, FVector2D CallFunc_MakeVector2D_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_12, FVector2D CallFunc_MakeVector2D_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_15, FVector2D CallFunc_MakeVector2D_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_16, FVector2D CallFunc_MakeVector2D_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_7);
    void Construct();
    void SetData(class AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_Cro_BoltActionRifle(int32 EntryPoint, FExecuteUbergraph_HUD_Cro_BoltActionRifleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AItem* K2Node_Event_item, bool K2Node_Event_IsDesignTime, class UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor K2Node_MakeStruct_LinearColor_1, FExecuteUbergraph_HUD_Cro_BoltActionRifleK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
