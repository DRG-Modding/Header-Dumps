#ifndef UE4SS_SDK_WPN_ChargeBlaster_HPP
#define UE4SS_SDK_WPN_ChargeBlaster_HPP

class AWPN_ChargeBlaster_C : public AChargedWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* AC_ChargeLevel;
    class UFirstPersonWidgetComponent* Widget_ChargeNew;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh2;
    class UFirstPersonWidgetComponent* Widget_Ammo;
    class UFirstPersonWidgetComponent* Widget_HeatNew;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Arc;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Right;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Left;
    class UChargedProjectileLauncherComponent* ChargedProjectileLauncher;
    class UPointLightComponent* MuzzlePointLight;
    class UCrosshairAggregator* CrosshairAggregator;
    class UWeaponDisplay_ChargeBlaster_Charge_C* ChargeUI;
    class UWeaponDisplay_ChargeBlaster_Heat_C* OverheatUI;
    class UWeaponDisplay_ChargeBlaster_AmmoCounter_C* AmmoUI;
    int32 ChargeLevel;
    class UAudioComponent* AC_Heat;
    class USoundBase* TemperatureAudio;
    class USoundBase* OverheatedAudio;
    class UAudioComponent* AC_ChargeLevel_0;
    class UAudioComponent* AC_ChargeSpinUp;
    class UParticleSystemComponent* OverheatEmitterInstance;
    class UMaterialInstanceDynamic* SlideParameter;

    void FadeOutIfValid(class UAudioComponent*& AC, bool CallFunc_IsValid_ReturnValue);
    void HandleHeatAudio(bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class USoundBase* K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void HandleChargeAudio(float charge, int32 CurrentLevel, int32 MaxLevel, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FText CallFunc_GetUpgradeName_ReturnValue, TSubclassOf<class AWPN_ChargeBlaster_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry, bool CallFunc_UPGDESC_Generic_HasUpgradedValue, FText CallFunc_GetUpgradeName_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, TSubclassOf<class AWPN_ChargeBlaster_C> CallFunc_GetObjectClass_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_1, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue, TSubclassOf<class AWPN_ChargeBlaster_C> CallFunc_GetObjectClass_ReturnValue_2, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_2, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_2, FGearStatEntry CallFunc_UPGDESC_Projectile_GearStatEntry, bool CallFunc_UPGDESC_Projectile_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_ChargedWeapon_GearStatEntry, bool CallFunc_UPGDESC_ChargedWeapon_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, FGearStatEntry CallFunc_UPGDESC_Projectile_GearStatEntry_1, bool CallFunc_UPGDESC_Projectile_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_ChargedProjectile_GearStatEntry, bool CallFunc_UPGDESC_ChargedProjectile_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, FGearStatEntry CallFunc_UPGDESC_ChargedProjectile_GearStatEntry_1, bool CallFunc_UPGDESC_ChargedProjectile_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_ChargedWeapon_GearStatEntry_1, bool CallFunc_UPGDESC_ChargedWeapon_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, FGearStatEntry CallFunc_UPGDESC_ChargedWeapon_GearStatEntry_2, bool CallFunc_UPGDESC_ChargedWeapon_HasUpgradedValue_2, FGearStatEntry CallFunc_UPGDESC_ChargedWeapon_GearStatEntry_3, bool CallFunc_UPGDESC_ChargedWeapon_HasUpgradedValue_3, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, FGearStatEntry CallFunc_UPGDESC_ChargedWeapon_GearStatEntry_4, bool CallFunc_UPGDESC_ChargedWeapon_HasUpgradedValue_4, FGearStatEntry CallFunc_UPGDESC_ChargedWeapon_GearStatEntry_5, bool CallFunc_UPGDESC_ChargedWeapon_HasUpgradedValue_5, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_2, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_3, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_3, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_Array_Add_ReturnValue_16);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void OnHeatChanged_Event_0(float charge);
    void ChargeChanged(float charge);
    void RecieveUnequipped();
    void ReceiveOverheatedChanged(bool isOverheated);
    void OnSkinChanged(class USkinEffect* Skin);
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void ExecuteUbergraph_WPN_ChargeBlaster(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_WPN_ChargeBlasterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_charge_1, float K2Node_CustomEvent_charge, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UWeaponDisplay_ChargeBlaster_Heat_C* K2Node_DynamicCast_AsWeapon_Display_Charge_Blaster_Heat, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UWeaponDisplay_ChargeBlaster_Charge_C* K2Node_DynamicCast_AsWeapon_Display_Charge_Blaster_Charge, bool K2Node_DynamicCast_bSuccess_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_3, class UWeaponDisplay_ChargeBlaster_AmmoCounter_C* K2Node_DynamicCast_AsWeapon_Display_Charge_Blaster_Ammo_Counter, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_Event_IsOverheated, class UParticleSystemComponent* CallFunc_SpawnFirstPersonEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, class USkinEffect* K2Node_Event_skin, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FExecuteUbergraph_WPN_ChargeBlasterK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerCharacter* K2Node_Event_ItemOwner, bool CallFunc_IsLocallyControlled_ReturnValue_1);
};

#endif