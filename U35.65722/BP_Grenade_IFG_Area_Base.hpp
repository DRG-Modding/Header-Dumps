#ifndef UE4SS_SDK_BP_Grenade_IFG_Area_Base_HPP
#define UE4SS_SDK_BP_Grenade_IFG_Area_Base_HPP

class ABP_Grenade_IFG_Area_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class UAudioComponent* Audio;
    class UParticleSystemComponent* ColdCloud;
    class USphereComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float LifeTime;
    float ParticleDeathDuration;
    bool Actice;
    class USoundBase* FieldStop_Cue;
    class USoundBase* Explosion_Cue;
    class USoundBase* EnterField_Cue;
    class USoundBase* LeaveField_Cue;

    void PushMixAtDistance(float Max Distance, float Min Distance, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void OnRep_Actice(FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature(class AActor* TargetActor, bool entered);
    void ActiveWeakeningEffect();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Grenade_IFG_Area_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* K2Node_ComponentBoundEvent_targetActor, bool K2Node_ComponentBoundEvent_entered, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1);
};

#endif
