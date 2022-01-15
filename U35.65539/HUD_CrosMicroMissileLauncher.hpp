#ifndef UE4SS_SDK_HUD_CrosMicroMissileLauncher_HPP
#define UE4SS_SDK_HUD_CrosMicroMissileLauncher_HPP

class UHUD_CrosMicroMissileLauncher_C : UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DotFade;
    UImage* Arrow_Bottom;
    UImage* Arrow_Left;
    UImage* Arrow_Right;
    UImage* Arrow_Top;
    UImage* CH_HL;
    UImage* CH_HR;
    UImage* CH_LeftBottom;
    UImage* CH_LeftTop;
    UImage* CH_RightBottom;
    UImage* CH_RightTop;
    UImage* CH_VB;
    UImage* CH_VT;
    UImage* M1;
    UImage* M2;
    UImage* M3;
    UImage* M4;
    UImage* M5;
    UImage* M6;
    UImage* M7;
    UImage* M8;
    UImage* M9;
    float Opacity High;
    APlayerCharacter* Character;
    float Opacity Low;
    FTimerHandle BuckShotCheckTimer;
    TArray<UImage*> MissileCounters;

    void SetData(AItem* Item);
    void Construct();
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void StartCharging();
    void EndCharge();
    void ToggleBuckShotCrosshair(float Spread);
    void CheckBuckShot();
    void ExecuteUbergraph_HUD_CrosMicroMissileLauncher(int32 EntryPoint, ChargingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, AItem* K2Node_Event_item, UWPN_MicroMissileLauncher_C* K2Node_DynamicCast_AsWPN_Micro_Missile_Launcher, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChargeCurrentFireCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, int32 Temp_int_Loop_Counter_Variable_1, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Add_IntInt_ReturnValue_1, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, ChargingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_MakeStruct_LinearColor, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, float K2Node_CustomEvent_Spread, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, UImage* CallFunc_Array_Get_Item, TArray<UImage*>& K2Node_MakeArray_Array, UImage* CallFunc_Array_Get_Item_1, UImage* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, UImage* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
}

#endif
