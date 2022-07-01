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
    void OnRep_SpawnedBattery();
    void UserConstructionScript();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_MainShieldActvator(int32 EntryPoint);
    void Activated__DelegateSignature();
};

#endif
