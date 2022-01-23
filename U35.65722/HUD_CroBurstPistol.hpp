#ifndef UE4SS_SDK_HUD_CroBurstPistol_HPP
#define UE4SS_SDK_HUD_CroBurstPistol_HPP

class UHUD_CroBurstPistol_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CH_Bottom;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* Dot;
    class APlayerCharacter* Character;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CroBurstPistol(int32 EntryPoint, FExecuteUbergraph_HUD_CroBurstPistolK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_CroBurstPistolK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FLinearColor K2Node_MakeStruct_LinearColor, bool Temp_bool_Has_Been_Initd_Variable, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class AItem* K2Node_Event_item, class UHitscanBaseComponent* CallFunc_GetComponentByClass_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_MakeStruct_LinearColor_1);
};

#endif
