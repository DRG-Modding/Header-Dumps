#ifndef UE4SS_SDK_WPN_M1000_HPP
#define UE4SS_SDK_WPN_M1000_HPP

class AWPN_M1000_C : public ABoltActionWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UDamageComponent* Damage;
    class UPointLightComponent* MuzzleLight;
    class UHitscanComponent* HitScan;
    class UCrosshairAggregator* CrosshairAggregator;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FText CallFunc_GetUpgradeName_ReturnValue, TSubclassOf<class AWPN_M1000_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades, FGearStatEntry CallFunc_UPGDESC_BoltAction_GearStatEntry, bool CallFunc_UPGDESC_BoltAction_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry, bool CallFunc_UPGDESC_Item_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry, bool CallFunc_UPGDESC_Generic_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_3, TSubclassOf<class AWPN_M1000_C> CallFunc_GetObjectClass_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_4, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_3, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_3, FGearStatEntry CallFunc_UPGDESC_BoltAction_GearStatEntry_1, bool CallFunc_UPGDESC_BoltAction_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, FGearStatEntry CallFunc_UPGDESC_BoltAction_GearStatEntry_2, bool CallFunc_UPGDESC_BoltAction_HasUpgradedValue_2, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry_1, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades_1, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry_2, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades_2, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, FGearStatEntry CallFunc_UPGDESC_BoltAction_GearStatEntry_3, bool CallFunc_UPGDESC_BoltAction_HasUpgradedValue_3, FGearStatEntry CallFunc_UPGDESC_BoltAction_GearStatEntry_4, bool CallFunc_UPGDESC_BoltAction_HasUpgradedValue_4, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, FGearStatEntry CallFunc_UPGDESC_BoltAction_GearStatEntry_5, bool CallFunc_UPGDESC_BoltAction_HasUpgradedValue_5, FGearStatEntry CallFunc_UPGDESC_BoltAction_GearStatEntry_6, bool CallFunc_UPGDESC_BoltAction_HasUpgradedValue_6, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_Array_Add_ReturnValue_16, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_2, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_17, int32 CallFunc_Array_Add_ReturnValue_18, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_4, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_4, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_3, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_3, int32 CallFunc_Array_Add_ReturnValue_19, int32 CallFunc_Array_Add_ReturnValue_20);
    void UserConstructionScript();
    void RecieveEquipped();
    void Recieve_UpdateMeshses(bool IsFirstPerson);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WPN_M1000(int32 EntryPoint, bool K2Node_Event_isFirstPerson, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWeaponDisplay_Base_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count, bool K2Node_DynamicCast_bSuccess);
};

#endif
