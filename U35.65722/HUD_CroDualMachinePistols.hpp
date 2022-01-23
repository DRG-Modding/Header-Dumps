#ifndef UE4SS_SDK_HUD_CroDualMachinePistols_HPP
#define UE4SS_SDK_HUD_CroDualMachinePistols_HPP

class UHUD_CroDualMachinePistols_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CH_BottomLeft;
    class UImage* CH_BottomRight;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class APlayerCharacter* Character;
    class UHitscanBaseComponent* HitscanComponent;

    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CroDualMachinePistols(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurrentHorizontalSpread_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor, FExecuteUbergraph_HUD_CroDualMachinePistolsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AItem* K2Node_Event_item, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, bool K2Node_Event_IsDesignTime, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_MakeStruct_LinearColor_1);
};

#endif
