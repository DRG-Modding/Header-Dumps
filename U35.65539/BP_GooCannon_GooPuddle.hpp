#ifndef UE4SS_SDK_BP_GooCannon_GooPuddle_HPP
#define UE4SS_SDK_BP_GooCannon_GooPuddle_HPP

class ABP_GooCannon_GooPuddle_C : AGooGunPuddle
{
    FPointerToUberGraphFrame UberGraphFrame;
    UObjectTemperatureComponent* ObjectTemperature;
    UTerrainDetectComponent* TerrainDetect;
    UDamageComponent* Damage;
    UProjectileExplosion* ProjectileExplosion;
    UNiagaraComponent* Niagara;
    USphereComponent* Sphere3;
    USphereComponent* Sphere2;
    USphereComponent* Sphere1;
    USphereComponent* Sphere;
    UTerrainPlacementComponent* terrainPlacement;
    USceneComponent* Scene;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    float Timeline_0_Travel_B8070DF14C3D466D9EB0F2B093A50381;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B8070DF14C3D466D9EB0F2B093A50381;
    UTimelineComponent* Timeline_0;
    AWPN_GooCannon_C* SuckToActor;
    FTransform InitialSuckToActorTransform;
    bool CanExplode;

    void ExplodePuddle(FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
    void OnRep_SuckToActor();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnSuckToActor();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void RemovePuddle();
    void BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_1_OnStartBurning__DelegateSignature();
    void IgniteGoo();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void OnStatusEffectAdded(const FGooPuddleStatusEffectTrigger& Trigger);
    void ExecuteUbergraph_BP_GooCannon_GooPuddle(int32 EntryPoint, const TSubclassOf<UStatusEffect> Temp_class_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FTransform CallFunc_GetMuzzle_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FTransform CallFunc_MakeTransform_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_1, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, const FGooPuddleStatusEffectTrigger K2Node_Event_Trigger, FTransform CallFunc_TLerp_ReturnValue, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
}

#endif
