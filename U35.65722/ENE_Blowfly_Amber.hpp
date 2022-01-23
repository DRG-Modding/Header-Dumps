#ifndef UE4SS_SDK_ENE_Blowfly_Amber_HPP
#define UE4SS_SDK_ENE_Blowfly_Amber_HPP

class AENE_Blowfly_Amber_C : public AENE_Mactera_Shooter_Normal_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Infestation02;
    class UPointLightComponent* PointLight2;
    class UStaticMeshComponent* Mesh_Infestation01;
    class UPointLightComponent* PointLight1;
    class AGameEvent* GameEvent;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(class AGameEvent* GameEventbool CallFunc_IsValid_ReturnValue);
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnEventFinished(bool eventSuccess);
    void StartFizzle();
    void BndEvt__FrozenImpact_K2Node_ComponentBoundEvent_1_Delegate__DelegateSignature();
    void ExecuteUbergraph_ENE_Blowfly_Amber(int32 EntryPoint, float K2Node_Event_Progress, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_GetActorUpVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool K2Node_Event_eventSuccess, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsEventActive_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_AmberChunk_C* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
