#ifndef UE4SS_SDK_BP_BRT_Bomb_HPP
#define UE4SS_SDK_BP_BRT_Bomb_HPP

class ABP_BRT_Bomb_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UExplosionComponent* Explosion;
    class USphereComponent* Area Trigger;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    bool Triggered;
    bool Exploded;
    class USoundCue* ExplosionSound;
    class UParticleSystem* ExplosionParticles;
    class USoundMix* ExplosionMixModifier;
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
    void BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BRT_Bomb(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool Temp_bool_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1);
};

#endif
