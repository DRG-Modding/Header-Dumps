#ifndef UE4SS_SDK_WeaponDisplay_MicroMissileLauncher_HPP
#define UE4SS_SDK_WeaponDisplay_MicroMissileLauncher_HPP

class UWeaponDisplay_MicroMissileLauncher_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AmmoCount;
    class UHorizontalBox* ChargeBox;
    class UImage* Image_88;
    class UTextBlock* MaxAmmo;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_1;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_2;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_3;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_4;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_5;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_6;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_7;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_8;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_9;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_10;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_11;
    class AMicroMissileLauncher* MissileLauncherItem;
    TArray<class UUI_MicroMissileLauncher_Charge_C*> ChargeIcons;
    FTimerHandle ChargingHandle;
    int32 CurrentCharge;
    int32 ClipCount;
    bool Charging;
    class UAudioComponent* PingAudio;

    void SetCurrentChargeWithAudio(int32 InCharge, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void Initialize(class AItem* OwningItem, class UWidgetComponent* WidgetComp);
    void OnStartCharging();
    void OnEndCharging();
    void OnUpdateCharging();
    void Construct();
    void ResetChargingUI(bool InHideIcons);
    void ExecuteUbergraph_WeaponDisplay_MicroMissileLauncher(int32 EntryPoint, FText CallFunc_Conv_IntToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FText CallFunc_Conv_IntToText_ReturnValue_1, int32 K2Node_Event_value_1, int32 K2Node_Event_value, FText CallFunc_Conv_IntToText_ReturnValue_2, class AItem* K2Node_Event_OwningItem, class UWidgetComponent* K2Node_Event_WidgetComp, class AMicroMissileLauncher* K2Node_DynamicCast_AsMicro_Missile_Launcher, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChargeCurrentFireCount_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUI_MicroMissileLauncher_Charge_C* CallFunc_Array_Get_Item, FText CallFunc_Conv_IntToText_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, FExecuteUbergraph_WeaponDisplay_MicroMissileLauncherK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_WeaponDisplay_MicroMissileLauncherK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_InHideIcons, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class UUI_MicroMissileLauncher_Charge_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, FExecuteUbergraph_WeaponDisplay_MicroMissileLauncherK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, TArray<class UUI_MicroMissileLauncher_Charge_C*>& CallFunc_CreateOrReuseChildren_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetChargeCurrentFireCount_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
};

#endif
