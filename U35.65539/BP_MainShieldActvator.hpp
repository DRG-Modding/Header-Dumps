#ifndef UE4SS_SDK_BP_MainShieldActvator_HPP
#define UE4SS_SDK_BP_MainShieldActvator_HPP

class ABP_MainShieldActvator_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* Light;
    UStaticMeshComponent* Tube;
    UStaticMeshComponent* Box;
    UArrowComponent* BarrelDirection;
    UCapsuleComponent* Capsule;
    UStaticMeshComponent* StaticMesh;
    USingleUsableComponent* SingleUsable;
    USceneComponent* DefaultSceneRoot;
    FBP_MainShieldActvator_CActivated Activated;
    void Activated();
    float Launch force;
    ABP_ShieldBattery_C* SpawnedBattery;
    UMaterialInstanceDynamic* Mid;
    float LightIntensity;

    void Expose();
    void OnRep_SpawnedBattery(FVector CallFunc_K2_GetComponentLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_MainShieldActvator(int32 EntryPoint, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_ShieldBattery_C* CallFunc_FinishSpawningActor_ReturnValue);
    void Activated__DelegateSignature();
}

#endif
