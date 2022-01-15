#ifndef UE4SS_SDK_ENE_Grabber_HPP
#define UE4SS_SDK_ENE_Grabber_HPP

class AENE_Grabber_C : UFlyingLifter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWeakpointGlowComponent* WeakpointGlow;
    UPointLightComponent* PointLight;
    TEnumAsByte<MacteraDeathTypes::Type> DeathType;

    void OnRep_DeathType(bool K2Node_SwitchEnum_CmpSuccess);
    void OnMessageAI(FName TriggerName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags);
    void ReceiveBeginPlay();
    void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_3_GrabbedActorSig__DelegateSignature(AActor* aGrabbedActor);
    void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_4_ReleasedActorSig__DelegateSignature(AActor* aGrabbedActor);
    void OnFrozen(AActor* Source);
    void MakeElite();
    void Death_Weakpoint();
    void Death_Corrosive();
    void Death_Normal();
    void ExecuteUbergraph_ENE_Grabber(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FName K2Node_Event_triggerName, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent_1, bool K2Node_SwitchName_CmpSuccess, UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_damageCause, AController* K2Node_ComponentBoundEvent_instigator, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<UDamageTag*>& K2Node_ComponentBoundEvent_tags, bool CallFunc_IsWeakPoint_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, AActor* K2Node_ComponentBoundEvent_aGrabbedActor_1, AActor* K2Node_ComponentBoundEvent_aGrabbedActor, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsDead_ReturnValue, AController* CallFunc_GetController_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, AController* CallFunc_GetController_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, AActor* K2Node_Event_source, UFSDAIController* CallFunc_GetFSDAIController_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
}

#endif
