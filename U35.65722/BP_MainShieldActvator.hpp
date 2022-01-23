#ifndef UE4SS_SDK_BP_MainShieldActvator_HPP
#define UE4SS_SDK_BP_MainShieldActvator_HPP

class ABP_MainShieldActvator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Light;
    class UStaticMeshComponent* Tube;
    class UStaticMeshComponent* Box;
    class UArrowComponent* BarrelDirection;
    class UCapsuleComponent* Capsule;
    class UStaticMeshComponent* StaticMesh;
    class USingleUsableComponent* SingleUsable;
    class USceneComponent* DefaultSceneRoot;
    FBP_MainShieldActvator_CActivated Activated;
    void Activated();
    float Launch force;
    class ABP_ShieldBattery_C* SpawnedBattery;
    class UMaterialInstanceDynamic* Mid;
    float LightIntensity;

    void Expose();
    void OnRep_SpawnedBattery(FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_MainShieldActvator(int32 EntryPoint, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ShieldBattery_C* CallFunc_FinishSpawningActor_ReturnValue);
    void Activated__DelegateSignature();
};

#endif
