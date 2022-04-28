#ifndef UE4SS_SDK_WPN_DualMPs_HPP
#define UE4SS_SDK_WPN_DualMPs_HPP

class AWPN_DualMPs_C : public ADualMachinePistols
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidgetLeft;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UHitscanComponent* HitScan;
    class UCrosshairAggregator* CrosshairAggregator;
    class UDamageComponent* Damage;
    class UPointLightComponent* MuzzleFlash;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FText MagSize, FText RoF, FText Combined, FText CallFunc_GetUpgradeName_ReturnValue, FText CallFunc_GetUpgradeName_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FText CallFunc_Conv_StringToText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_3, FText CallFunc_Conv_StringToText_ReturnValue_1, TSubclassOf<class AWPN_DualMPs_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry, bool CallFunc_UPGDESC_Generic_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_1, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry, bool CallFunc_UPGDESC_Item_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_DualMPs_GearStatEntry, bool CallFunc_UPGDESC_DualMPs_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, FGearStatEntry CallFunc_UPGDESC_DamageBonus_StatusBonus_GearStatEntry, bool CallFunc_UPGDESC_DamageBonus_StatusBonus_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_4, TSubclassOf<class AWPN_DualMPs_C> CallFunc_GetObjectClass_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry_1, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades_1, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_2, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_3, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_3, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_3, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_3, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_4, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_4, int32 CallFunc_Array_Add_ReturnValue_15);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WPN_DualMPs(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWeaponDisplay_Base_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UWeaponDisplay_Base_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count_1, bool K2Node_DynamicCast_bSuccess_1);
};

#endif