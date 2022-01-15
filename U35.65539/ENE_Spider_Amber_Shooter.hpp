#ifndef UE4SS_SDK_ENE_Spider_Amber_Shooter_HPP
#define UE4SS_SDK_ENE_Spider_Amber_Shooter_HPP

class AENE_Spider_Amber_Shooter_C : UENE_Spider_Shooter_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Mesh_Infestation03;
    UPointLightComponent* PointLight3;
    UStaticMeshComponent* Mesh_Infestation02;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    UStaticMeshComponent* Mesh_Infestation01;
    AGameEvent* Event;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(AGameEvent* GameEventbool CallFunc_IsValid_ReturnValue);
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnEventFinished(bool eventSuccess);
    void ExecuteUbergraph_ENE_Spider_Amber_Shooter(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_Progress, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_GetActorUpVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool K2Node_Event_eventSuccess, UBP_AmberChunk_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsEventActive_ReturnValue);
}

#endif
