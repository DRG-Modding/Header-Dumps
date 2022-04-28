#ifndef UE4SS_SDK_WPN_PlasmaCarbine_HPP
#define UE4SS_SDK_WPN_PlasmaCarbine_HPP

class AWPN_PlasmaCarbine_C : public APlasmaCarbine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHeatMaterialComponent* HeatMaterial;
    class UDamageComponent* AoEDamageComponent;
    class UAudioComponent* OverHeatSound;
    class UFirstPersonWidgetComponent* FirstPersonWidget_Ammo;
    class UCrosshairAggregator* CrosshairAggregator;
    class UProjectileLauncherComponent* ProjectileLauncher;
    float Overheat_Ammo_Regen_Effect_6788C26846C5EA00DB58E08FBF311673;
    TEnumAsByte<ETimelineDirection::Type> Overheat_Ammo_Regen__Direction_6788C26846C5EA00DB58E08FBF311673;
    class UTimelineComponent* Overheat Ammo Regen;
    float OverHeat;
    bool HasOverheated;
    bool RegenAmmoOnOverheat;
    bool AoeOnOverheat;
    float AmmoResupplyProgress;
    bool SpeedBoostOnOverheat;
    TSubclassOf<class UStatusEffect> SpeedBoostOnOverheatSTE;
    float OverheatAoEMaxDMG;
    float OverheatAoEDamageRadius;
    float OldRoF;
    bool TermalFeedbackLoop;
    float HeatAtRegenTrigger;

    void GetAmmoWidget(class UWeaponDisplay_PlasmaCarbine_AmmoCounter_C*& AsWeapon Display Plasma Carbine Ammo Counter, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWeaponDisplay_PlasmaCarbine_AmmoCounter_C* K2Node_DynamicCast_AsWeapon_Display_Plasma_Carbine_Ammo_Counter, bool K2Node_DynamicCast_bSuccess);
    void SetUpgradesAndOverclocks(class UItemUpgrade* ItemUpgrade, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<class AWPN_PlasmaCarbine_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_ProjectileLauncher_GearStatEntry, bool CallFunc_UPGDESC_ProjectileLauncher_HasUpgradedValue, TSubclassOf<class AWPN_PlasmaCarbine_C> CallFunc_GetObjectClass_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry, bool CallFunc_UPGDESC_Generic_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_1, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_2, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_2, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_3, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_3, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_4, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_4, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry, bool CallFunc_UPGDESC_Item_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_5, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_5, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry_1, bool CallFunc_UPGDESC_Item_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry_2, bool CallFunc_UPGDESC_Item_HasUpgradedValue_2, FGearStatEntry CallFunc_UPGDESC_Item_GearStatEntry_3, bool CallFunc_UPGDESC_Item_HasUpgradedValue_3, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_6, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_6, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_7, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_7, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry_8, bool CallFunc_UPGDESC_Generic_HasUpgradedValue_8, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_Array_Add_ReturnValue_16, TSubclassOf<class AWPN_PlasmaCarbine_C> CallFunc_GetObjectClass_ReturnValue_2, class UProjectileLauncherComponent* CallFunc_GetComponentFromClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_Projectile_GearStatEntry, bool CallFunc_UPGDESC_Projectile_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_17, int32 CallFunc_Array_Add_ReturnValue_18, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_2, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_19, int32 CallFunc_Array_Add_ReturnValue_20);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Overheat Ammo Regen__FinishedFunc();
    void Overheat Ammo Regen__UpdateFunc();
    void ReceiveBeginPlay();
    void CustomEvent1(const class UItemUpgrade* Event);
    void OnTemperatureChanged(float Temperature, bool Overheated);
    void Receive_IsFiringChanged(bool NewValue);
    void Receive_Overheated();
    void RecieveStartUsing();
    void Server Trigger Aoe();
    void Trigger Aoe Effects();
    void ServerPushSpeedBoost();
    void OnSkinChanged(class USkinEffect* Skin);
    void ExecuteUbergraph_WPN_PlasmaCarbine(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, const class UItemUpgrade* K2Node_Event_Event, class UWeaponDisplay_Base_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_temperature, bool K2Node_Event_overheated, bool K2Node_Event_newValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsBeingDestroyed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_6, class USkinEffect* K2Node_Event_skin, int32 CallFunc_GetMaterialIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_GetMaterialIndex_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_7, class UWeaponDisplay_PlasmaCarbine_AmmoCounter_C* CallFunc_GetAmmoWidget_AsWeapon_Display_Plasma_Carbine_Ammo_Counter, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_Add_FloatFloat_ReturnValue_1);
};

#endif