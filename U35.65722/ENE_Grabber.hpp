#ifndef UE4SS_SDK_ENE_Grabber_HPP
#define UE4SS_SDK_ENE_Grabber_HPP

class AENE_Grabber_C : public AFlyingLifter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UPointLightComponent* PointLight;
    TEnumAsByte<MacteraDeathTypes::Type> DeathType;

    void OnRep_DeathType(bool K2Node_SwitchEnum_CmpSuccess);
    void OnMessageAI(FName TriggerName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, class UDamageClass* DamageClass, class AActor* damageCause, class AController* Instigator, class UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<class UDamageTag*>& Tags);
    void ReceiveBeginPlay();
    void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_3_GrabbedActorSig__DelegateSignature(class AActor* aGrabbedActor);
    void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_4_ReleasedActorSig__DelegateSignature(class AActor* aGrabbedActor);
    void OnFrozen(class AActor* Source);
    void MakeElite();
    void Death_Weakpoint();
    void Death_Corrosive();
    void Death_Normal();
    void ExecuteUbergraph_ENE_Grabber(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FName K2Node_Event_triggerName, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent_1, bool K2Node_SwitchName_CmpSuccess, class UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_damageCause, class AController* K2Node_ComponentBoundEvent_instigator, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<class UDamageTag*>& K2Node_ComponentBoundEvent_tags, bool CallFunc_IsWeakPoint_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* K2Node_ComponentBoundEvent_aGrabbedActor_1, class AActor* K2Node_ComponentBoundEvent_aGrabbedActor, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsDead_ReturnValue, class AController* CallFunc_GetController_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, class AActor* K2Node_Event_source, class AFSDAIController* CallFunc_GetFSDAIController_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

#endif
