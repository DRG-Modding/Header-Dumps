#ifndef UE4SS_SDK_WPN_Revolver_HPP
#define UE4SS_SDK_WPN_Revolver_HPP

class AWPN_Revolver_C : public ARevoler
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UStaticMeshComponent* TP_Drum;
    class UFirstPersonStaticMeshComponent* FP_Drum;
    class UDamageComponent* Damage;
    class UPointLightComponent* MuzzlePointLight;
    class UFirstPersonStaticMeshComponent* Mesh_AmmoCounter;
    class UHitscanComponent* HitScan;
    class UCrosshairAggregator* CrosshairAggregator;
    float LastSpread;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<class AWPN_Revolver_C> CallFunc_GetObjectClass_ReturnValue, FText CallFunc_GetUpgradeName_ReturnValue, TSubclassOf<class AWPN_Revolver_C> CallFunc_GetObjectClass_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry, bool CallFunc_UPGDESC_Generic_HasUpgradedValue, TSubclassOf<class AWPN_Revolver_C> CallFunc_GetObjectClass_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, FText CallFunc_GetUpgradeName_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_1, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_2, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TSubclassOf<class AWPN_Revolver_C> CallFunc_GetObjectClass_ReturnValue_3, FGearStatEntry CallFunc_UPGDESC_DamageBonus_Random_GearStatEntry, bool CallFunc_UPGDESC_DamageBonus_Random_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_3, TArray<EAmmoDrivenWeapnUpgradeType>& K2Node_MakeArray_Array, FText CallFunc_GetUpgradeName_ReturnValue_2, TSubclassOf<class AWPN_Revolver_C> CallFunc_GetObjectClass_ReturnValue_4, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, TSubclassOf<class AWPN_Revolver_C> CallFunc_GetObjectClass_ReturnValue_5, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_6, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry_1, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades_1, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry_2, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades_2, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_2, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry_3, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades_3, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_3, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_3, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_4, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_4, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_5, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_5, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_6, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_6, FGearStatEntry CallFunc_UPGDESC_DamageBonus_TargetStateBonus_GearStatEntry, bool CallFunc_UPGDESC_DamageBonus_TargetStateBonus_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_Array_Add_ReturnValue_16, FGearStatEntry CallFunc_UPGDESC_DamageBonus_TargetTypeBonus_GearStatEntry, bool CallFunc_UPGDESC_DamageBonus_TargetTypeBonus_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_17);
    void UserConstructionScript();
    void Receive_ReloadBegin();
    void Receive_ReloadEnd();
    void ReceiveBeginPlay();
    void OnSpreadChanged_Event_0(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void OnSkinChanged(class USkinEffect* Skin);
    void ExecuteUbergraph_WPN_Revolver(int32 EntryPoint, FExecuteUbergraph_WPN_RevolverK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWeaponDisplay_Base_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFirstPerson_ReturnValue, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, FString CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FString CallFunc_Conv_FloatToString_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class USkinEffect* K2Node_Event_skin);
};

#endif