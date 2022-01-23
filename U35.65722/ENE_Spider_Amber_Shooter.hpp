#ifndef UE4SS_SDK_ENE_Spider_Amber_Shooter_HPP
#define UE4SS_SDK_ENE_Spider_Amber_Shooter_HPP

class AENE_Spider_Amber_Shooter_C : public AENE_Spider_Shooter_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Infestation03;
    class UPointLightComponent* PointLight3;
    class UStaticMeshComponent* Mesh_Infestation02;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* Mesh_Infestation01;
    class AGameEvent* Event;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(class AGameEvent* GameEventbool CallFunc_IsValid_ReturnValue);
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnEventFinished(bool eventSuccess);
    void ExecuteUbergraph_ENE_Spider_Amber_Shooter(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_Progress, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_GetActorUpVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool K2Node_Event_eventSuccess, class ABP_AmberChunk_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsEventActive_ReturnValue);
};

#endif
