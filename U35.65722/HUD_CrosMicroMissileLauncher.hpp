#ifndef UE4SS_SDK_HUD_CrosMicroMissileLauncher_HPP
#define UE4SS_SDK_HUD_CrosMicroMissileLauncher_HPP

class UHUD_CrosMicroMissileLauncher_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* Arrow_Bottom;
    class UImage* Arrow_Left;
    class UImage* Arrow_Right;
    class UImage* Arrow_Top;
    class UImage* CH_HL;
    class UImage* CH_HR;
    class UImage* CH_LeftBottom;
    class UImage* CH_LeftTop;
    class UImage* CH_RightBottom;
    class UImage* CH_RightTop;
    class UImage* CH_VB;
    class UImage* CH_VT;
    class UImage* M1;
    class UImage* M2;
    class UImage* M3;
    class UImage* M4;
    class UImage* M5;
    class UImage* M6;
    class UImage* M7;
    class UImage* M8;
    class UImage* M9;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;
    FTimerHandle BuckShotCheckTimer;
    TArray<class UImage*> MissileCounters;

    void SetData(class AItem* Item);
    void Construct();
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void StartCharging();
    void EndCharge();
    void ToggleBuckShotCrosshair(float Spread);
    void CheckBuckShot();
    void ExecuteUbergraph_HUD_CrosMicroMissileLauncher(int32 EntryPoint, FExecuteUbergraph_HUD_CrosMicroMissileLauncherK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_CrosMicroMissileLauncherK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class AItem* K2Node_Event_item, class AWPN_MicroMissileLauncher_C* K2Node_DynamicCast_AsWPN_Micro_Missile_Launcher, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChargeCurrentFireCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, int32 Temp_int_Loop_Counter_Variable_1, FExecuteUbergraph_HUD_CrosMicroMissileLauncherK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Add_IntInt_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, FExecuteUbergraph_HUD_CrosMicroMissileLauncherK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_MakeStruct_LinearColor, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, float K2Node_CustomEvent_Spread, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, class UImage* CallFunc_Array_Get_Item, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item_1, class UImage* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UImage* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
};

#endif
