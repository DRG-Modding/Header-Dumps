#ifndef UE4SS_SDK_WPN_Gatling_HPP
#define UE4SS_SDK_WPN_Gatling_HPP

class AWPN_Gatling_C : public AGatlingGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* ParticleSystem;
    class UWeaponImpactComponent* WeaponImpact;
    class UDamageComponent* CritcalOverheatDamage;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystem;
    class UFirstPersonPointLightComponent* Light_MuzzleFlash;
    class UFirstPersonWidgetComponent* Widget_Overheat;
    class UHeatMaterialComponent* HeatMaterial;
    class UFirstPersonWidgetComponent* Widget_Ammo;
    class UCrosshairAggregator* CrosshairAggregator;
    class UHitscanComponent* HitScan;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FText CallFunc_GetUpgradeName_ReturnValue, TSubclassOf<class AWPN_Gatling_C> CallFunc_GetObjectClass_ReturnValue, FText CallFunc_GetUpgradeName_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry, bool CallFunc_UPGDESC_Generic_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue, TSubclassOf<class AWPN_Gatling_C> CallFunc_GetObjectClass_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_1, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_1, TSubclassOf<class AWPN_Gatling_C> CallFunc_GetObjectClass_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades, int32 CallFunc_Array_Add_ReturnValue_2, TSubclassOf<class AWPN_Gatling_C> CallFunc_GetObjectClass_ReturnValue_3, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry, bool CallFunc_UPGDESC_Item_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, FGearStatEntry CallFunc_UPGDESC_DamageBonus_HotBullets_GearStatEntry, bool CallFunc_UPGDESC_DamageBonus_HotBullets_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_BeltDriven_GearStatEntry, bool CallFunc_UPGDESC_BeltDriven_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, FGearStatEntry CallFunc_UPGDESC_BeltDriven_GearStatEntry_1, bool CallFunc_UPGDESC_BeltDriven_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_GatlingGun_GearStatEntry, bool CallFunc_UPGDESC_GatlingGun_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, FGearStatEntry CallFunc_UPGDESC_GatlingGun_GearStatEntry_1, bool CallFunc_UPGDESC_GatlingGun_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_GatlingGun_GearStatEntry_2, bool CallFunc_UPGDESC_GatlingGun_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, FGearStatEntry CallFunc_UPGDESC_HitScan_GearStatEntry_1, bool CallFunc_UPGDESC_HitScan_HasAnyUpgrades_1, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry_1, bool CallFunc_UPGDESC_Item_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_Array_Add_ReturnValue_16, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_2, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_2, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_3, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_3, int32 CallFunc_Array_Add_ReturnValue_17, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_4, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_4, float CallFunc_Conv_StringToFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_18, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Receive_Overheated();
    void Receive_IsFiringChanged(bool NewValue);
    void RecieveEquipped();
    void RecieveUnequipped();
    void All_SpawnHeatBurst();
    void TriggerCriticalOverheat();
    void OnTemperatureChanged(float Temperature, bool Overheated);
    void ReceiveBeginPlay();
    void OnSkinChanged(class USkinEffect* Skin);
    void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
    void CustomEvent1(const class UItemUpgrade* Event);
    void ExecuteUbergraph_WPN_Gatling(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UGatlingGun_Overheat_C* K2Node_DynamicCast_AsGatling_Gun_Overheat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFirstPerson_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnFirstPersonEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnFirstPersonEmitterAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnFirstPersonEmitterAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnFirstPersonEmitterAttached_ReturnValue_3, bool K2Node_Event_newValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UWeaponDisplay_Base_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_temperature, bool K2Node_Event_overheated, class USkinEffect* K2Node_Event_skin, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, const class UItemUpgrade* K2Node_Event_Event, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

#endif