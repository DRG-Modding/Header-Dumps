#ifndef UE4SS_SDK_HUD_CrosNewSuperShotgun_HPP
#define UE4SS_SDK_HUD_CrosNewSuperShotgun_HPP

class UHUD_CrosNewSuperShotgun_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CH_Left;
    class UImage* CH_LeftInterior;
    class UImage* CH_RighInterior;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* CH_TopInterior;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;

    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void SetData(class AItem* Item);
    void Construct();
    void ExecuteUbergraph_HUD_CrosNewSuperShotgun(int32 EntryPoint, FExecuteUbergraph_HUD_CrosNewSuperShotgunK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_CrosNewSuperShotgunK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool K2Node_Event_IsDesignTime, FVector2D CallFunc_MakeVector2D_ReturnValue_2, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class AItem* K2Node_Event_item, class UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor K2Node_MakeStruct_LinearColor);
};

#endif
