#ifndef UE4SS_SDK_WPN_DoubleDrills_HPP
#define UE4SS_SDK_WPN_DoubleDrills_HPP

class AWPN_DoubleDrills_C : public ADoubleDrillItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* Widget_Heat;
    class UFirstPersonWidgetComponent* Widget_Fuel;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class USceneComponent* OverheatingAudioScene;
    class UHeatMaterialComponent* HeatMaterial;
    class UCrosshairAggregator* CrosshairAggregator;
    float NextSplatTime;
    float DefaultFOV;
    class UWeaponDisplay_Overheat_C* OverheatWidget1;
    class UWeaponDisplay_Overheat_C* OverheaWidget2;
    class UWeaponDisplay_Drill_Heat_C* OverheatWidget;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<class AWPN_DoubleDrills_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry, bool CallFunc_UPGDESC_Item_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry_1, bool CallFunc_UPGDESC_Item_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Drills_GearStatEntry, bool CallFunc_UPGDESC_Drills_Has_Upgraded_Value, FGearStatEntry CallFunc_UPGDESC_Drills_GearStatEntry_1, bool CallFunc_UPGDESC_Drills_Has_Upgraded_Value_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, FGearStatEntry CallFunc_UPGDESC_Drills_GearStatEntry_2, bool CallFunc_UPGDESC_Drills_Has_Upgraded_Value_2, FGearStatEntry CallFunc_UPGDESC_Drills_GearStatEntry_3, bool CallFunc_UPGDESC_Drills_Has_Upgraded_Value_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_6);
    class USceneComponent* GetHeatingAudioSceneComponent();
    void OnTemperatureChanged(float Temperature, bool Overheated);
    void Increase FOV();
    void Decrease FOV();
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void BP_OnDrillDamage();
    void OnStartDrilling();
    void OnStopDrilling();
    void Receive_Overheated();
    void ReceiveBeginPlay();
    void Gunsling();
    void RecieveCycledItem();
    void ExecuteUbergraph_WPN_DoubleDrills(int32 EntryPoint, bool CallFunc_IsSaluting_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_temperature, bool K2Node_Event_overheated, bool CallFunc_IsLocallyControlled_ReturnValue, class APlayerCharacter* K2Node_Event_ItemOwner, FVector CallFunc_K2_GetActorLocation_ReturnValue, class USkeletalMeshComponent* CallFunc_GetRItemMesh_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnFirstPersonEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnFirstPersonEmitterAttached_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWeaponDisplay_Drill_Heat_C* K2Node_DynamicCast_AsWeapon_Display_Drill_Heat, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UWeaponDisplay_Base_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count, bool K2Node_DynamicCast_bSuccess_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Montage_Play_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsFirstPerson_ReturnValue_1);
};

#endif
