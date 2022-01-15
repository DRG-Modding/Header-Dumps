#ifndef UE4SS_SDK_WeaponDisplay_MicroMissileLauncher_HPP
#define UE4SS_SDK_WeaponDisplay_MicroMissileLauncher_HPP

class UWeaponDisplay_MicroMissileLauncher_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* AmmoCount;
    UHorizontalBox* ChargeBox;
    UImage* Image_88;
    UTextBlock* MaxAmmo;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_1;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_2;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_3;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_4;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_5;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_6;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_7;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_8;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_9;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_10;
    UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_11;
    AMicroMissileLauncher* MissileLauncherItem;
    TArray<UUI_MicroMissileLauncher_Charge_C*> ChargeIcons;
    FTimerHandle ChargingHandle;
    int32 CurrentCharge;
    int32 ClipCount;
    bool Charging;
    UAudioComponent* PingAudio;

    void SetCurrentChargeWithAudio(int32 InCharge, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void Initialize(AItem* OwningItem, UWidgetComponent* WidgetComp);
    void OnStartCharging();
    void OnEndCharging();
    void OnUpdateCharging();
    void Construct();
    void ResetChargingUI(bool InHideIcons);
    void ExecuteUbergraph_WeaponDisplay_MicroMissileLauncher(int32 EntryPoint, FText CallFunc_Conv_IntToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FText CallFunc_Conv_IntToText_ReturnValue_1, int32 K2Node_Event_value_1, int32 K2Node_Event_value, FText CallFunc_Conv_IntToText_ReturnValue_2, AItem* K2Node_Event_OwningItem, UWidgetComponent* K2Node_Event_WidgetComp, UMicroMissileLauncher* K2Node_DynamicCast_AsMicro_Missile_Launcher, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChargeCurrentFireCount_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UUI_MicroMissileLauncher_Charge_C* CallFunc_Array_Get_Item, FText CallFunc_Conv_IntToText_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, ChargingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ChargingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_InHideIcons, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UUI_MicroMissileLauncher_Charge_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, TArray<UUI_MicroMissileLauncher_Charge_C*>& CallFunc_CreateOrReuseChildren_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetChargeCurrentFireCount_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
}

#endif
