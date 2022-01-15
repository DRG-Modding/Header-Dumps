#ifndef UE4SS_SDK_BP_Zhukov_IceMines_HPP
#define UE4SS_SDK_BP_Zhukov_IceMines_HPP

class ABP_Zhukov_IceMines_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UExplosionComponent* Explosion;
    USphereComponent* Area Trigger;
    UDamageComponent* Damage;
    UStaticMeshComponent* Sphere;
    USceneComponent* DefaultSceneRoot;
    bool Triggered;
    bool Exploded;
    USoundCue* ExplosionSound;
    UParticleSystem* ExplosionParticles;
    USoundMix* ExplosionMixModifier;
    float ExplosionDuckMinDistance;
    float ExplosionDuckMaxDistance;
    float ExplosionDuckingTime;
    bool ready;
    float ArmingDelay;

    void OnRep_Ready();
    void OnRep_Triggered();
    void UserConstructionScript();
    void TriggerExplosion();
    void GetArmed();
    void BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Zhukov_IceMines(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool Temp_bool_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, InterfaceProperty K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1);
}

#endif
