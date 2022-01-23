#ifndef UE4SS_SDK_WPN_FlameThrower_HPP
#define UE4SS_SDK_WPN_FlameThrower_HPP

class AWPN_FlameThrower_C : public AFlameThrowerItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TP_Mag;
    class UFirstPersonStaticMeshComponent* FP_Mag;
    class UWeaponImpactComponent* WeaponImpact;
    class UParticleSystemComponent* ParticleSystemR;
    class UParticleSystemComponent* ParticleSystemL;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UFirstPersonPointLightComponent* FirstPersonPointLight;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystemR;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystemL;
    class UFirstPersonStaticMeshComponent* FirstPerson_Gauge;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UPointLightComponent* MuzzleLight;
    class UCrosshairAggregator* CrosshairAggregator;

    void SetTorchTimeoutHack();
    class UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
    class UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<class AWPN_FlameThrower_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry, bool CallFunc_UPGDESC_Item_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue, TSubclassOf<class AWPN_FlameThrower_C> CallFunc_GetObjectClass_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_DamageBonus_Flat_GearStatEntry, bool CallFunc_UPGDESC_DamageBonus_Flat_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, FGearStatEntry CallFunc_UPGDESC_StickyFlame_GearStatEntry, bool CallFunc_UPGDESC_StickyFlame_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_StickyFlame_GearStatEntry_1, bool CallFunc_UPGDESC_StickyFlame_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_FlameThrower_GearStatEntry, bool CallFunc_UPGDESC_FlameThrower_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, FGearStatEntry CallFunc_UPGDESC_FlameThrower_GearStatEntry_1, bool CallFunc_UPGDESC_FlameThrower_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_FlameThrower_GearStatEntry_2, bool CallFunc_UPGDESC_FlameThrower_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, FGearStatEntry CallFunc_UPGDESC_FlameThrower_GearStatEntry_3, bool CallFunc_UPGDESC_FlameThrower_HasUpgradedValue_3, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_3, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_3, int32 CallFunc_Array_Add_ReturnValue_13);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void RecieveEquipped();
    void RecieveUnequipped();
    void Receive_ReloadBegin();
    void Receive_ReloadEnd();
    void Recieve_UpdateMeshses(bool IsFirstPerson);
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
    void OnSkinChanged(class USkinEffect* Skin);
    void ExecuteUbergraph_WPN_FlameThrower(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWeaponDisplay_Base_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_isFirstPerson, class APlayerCharacter* K2Node_Event_ItemOwner, bool CallFunc_IsFirstPerson_ReturnValue, bool Temp_bool_Variable, class USceneComponent* K2Node_Select_Default, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue_1, class USkinEffect* K2Node_Event_skin);
};

#endif
