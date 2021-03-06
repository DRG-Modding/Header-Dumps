#ifndef UE4SS_SDK_BP_SentryGun_Redeployable_HPP
#define UE4SS_SDK_BP_SentryGun_Redeployable_HPP

class ABP_SentryGun_Redeployable_C : public ARedeployableSentryGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* SpecialAttackCollider;
    class UParticleSystemComponent* SpecialAttackParticleSystem;
    class UWidgetComponent* AmmoCountWidget;
    class UStaticMeshComponent* BarrelsMesh;
    class USceneComponent* SpotLightBase;
    class UStaticMeshComponent* LightCone;
    class UPointLightComponent* PointLight;
    class USpotLightComponent* SpotLight;
    class UProjectileLauncherComponent* ProjectileLauncher;
    class USimpleHealthComponent* SimpleHealth;
    class UDamageComponent* DamageComponent;
    class UPointLightComponent* PointLight1;
    class UReloadSentryUsableComponent* ReloadSentryUsable;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USingleUsableComponent* DeployUsable;
    class UWidgetComponent* BuildWidget;
    class UStaticMeshComponent* SpotLight2;
    class USphereComponent* UsableCollision;
    class UHitscanComponent* HitScan;
    float Timeline_0_Translate_BarrelOverchargeShot_4853B22243389D0916A3E09304615D5D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_4853B22243389D0916A3E09304615D5D;
    class UTimelineComponent* Timeline_0;
    float DismantleDuration;
    bool Building;
    float OldShotCooldown;
    int32 SpecialAttackAmmoCost;
    float BuildProgress;
    int32 MuzzleIndex;
    TArray<FName> MuzzleNames;
    class UMaterialInstanceDynamic* IndicatorMaterial;

    void UpdateIndicatorLight(bool FiredShot, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable_1, FLinearColor Temp_struct_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FLinearColor K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable_2, FLinearColor K2Node_Select_Default_1, float K2Node_Select_Default_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void ConditionallyEnableShadows(class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    float GetDeployProgress(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
    void ToggleBuildMode(bool InBuilding, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveOnDeploy();
    void ReceiveOnDismantle();
    void ReceiveOnDismantled();
    void ReceiveOnDeployed();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress);
    void ReceiveBeginPlay();
    void ReceiveOnSentryGunOwnerChanged();
    void ActivateSpecialAttack();
    void Multicast Special Attack GFX();
    void Reset Special Attack();
    void UpdateShadows();
    void BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(const FVector& Location);
    void ReceiveAmmoChanged(int32 Delta, int32 currentAmount);
    void ExecuteUbergraph_BP_SentryGun_Redeployable(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, FExecuteUbergraph_BP_SentryGun_RedeployableK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_HasAuthority_ReturnValue, float K2Node_ComponentBoundEvent_progress, bool CallFunc_IsValid_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool Temp_bool_Has_Been_Initd_Variable, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWeaponDisplay_SentryGun_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Sentry_Gun_Ammo_Count, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FVector CallFunc_GetMuzzleLocation_ReturnValue, FQuat CallFunc_GetMuzzleQuat_ReturnValue, FVector_NetQuantizeNormal CallFunc_QuadToNetQuantizeNormal_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_IsClosed_Variable, int32 CallFunc_GetAmmoLeft_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const FVector K2Node_ComponentBoundEvent_location, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 K2Node_Event_Delta, int32 K2Node_Event_CurrentAmount, bool CallFunc_Less_IntInt_ReturnValue);
};

#endif
