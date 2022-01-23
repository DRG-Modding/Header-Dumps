#ifndef UE4SS_SDK_WPN_PlatformGun_HPP
#define UE4SS_SDK_WPN_PlatformGun_HPP

class AWPN_PlatformGun_C : public AAmmoDrivenWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonPointLightComponent* FirstPersonPointLight;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UCrosshairAggregator* CrosshairAggregator;
    class UProjectileLauncherComponent* ProjectileLauncher;
    bool UsingBigPlatform;
    bool UsingLessFallDamage;
    bool UsingBugRepellant;
    int32 Material;
    bool UsingCubePlatform;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TArray<EAmmoDrivenWeapnUpgradeType>& K2Node_MakeArray_Array, TSubclassOf<class AWPN_PlatformGun_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_PlatformGun_GearStatEntry, bool CallFunc_UPGDESC_PlatformGun_Should_show_text, int32 CallFunc_Array_Add_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Generic_GearStatEntry, bool CallFunc_UPGDESC_Generic_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_PlatformGun_GearStatEntry_1, bool CallFunc_UPGDESC_PlatformGun_Should_show_text_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, FGearStatEntry CallFunc_UPGDESC_PlatformGun_GearStatEntry_2, bool CallFunc_UPGDESC_PlatformGun_Should_show_text_2, FGearStatEntry CallFunc_UPGDESC_PlatformGun_GearStatEntry_3, bool CallFunc_UPGDESC_PlatformGun_Should_show_text_3, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4);
    void ReceiveBeginPlay();
    void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature(const FVector& Location);
    void Upgraded_Blueprint_Implementation(const TArray<class UItemUpgrade*>& upgrades);
    void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(class AProjectileBase* Projectile);
    void ExecuteUbergraph_WPN_PlatformGun(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UPlatformGunAnimInstance* K2Node_DynamicCast_AsPlatform_Gun_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class UPlatformGunAnimInstance* K2Node_DynamicCast_AsPlatform_Gun_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1, const FVector K2Node_ComponentBoundEvent_location, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, const TArray<class UItemUpgrade*>& K2Node_Event_upgrades, class UWeaponDisplay_Base_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count, bool K2Node_DynamicCast_bSuccess_2, class UItemUpgrade* CallFunc_Array_Get_Item, class UPlatformGunUpgrade* K2Node_DynamicCast_AsPlatform_Gun_Upgrade, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue, class AProjectileBase* K2Node_ComponentBoundEvent_Projectile, bool K2Node_SwitchEnum_CmpSuccess, class APRJ_PlatformMaker_C* K2Node_DynamicCast_AsPRJ_Platform_Maker, bool K2Node_DynamicCast_bSuccess_4, class APRJ_PlatformMaker_C* K2Node_DynamicCast_AsPRJ_Platform_Maker_1, bool K2Node_DynamicCast_bSuccess_5, class APRJ_PlatformMaker_C* K2Node_DynamicCast_AsPRJ_Platform_Maker_2, bool K2Node_DynamicCast_bSuccess_6, class APRJ_PlatformMaker_C* K2Node_DynamicCast_AsPRJ_Platform_Maker_3, bool K2Node_DynamicCast_bSuccess_7, class APRJ_PlatformMaker_C* K2Node_DynamicCast_AsPRJ_Platform_Maker_4, bool K2Node_DynamicCast_bSuccess_8, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess);
};

#endif
