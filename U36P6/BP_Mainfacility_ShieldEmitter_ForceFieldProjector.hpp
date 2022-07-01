#ifndef UE4SS_SDK_BP_Mainfacility_ShieldEmitter_ForceFieldProjector_HPP
#define UE4SS_SDK_BP_Mainfacility_ShieldEmitter_ForceFieldProjector_HPP

class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UChildActorComponent* RHologram;
    class UChildActorComponent* LHologram;
    class UStaticMeshComponent* RShield;
    class UStaticMeshComponent* LShield;
    class UArrowComponent* LLaunchDirection;
    class UArrowComponent* RLaunchDirection;
    class UStaticMeshComponent* LBattery;
    class UStaticMeshComponent* RBattery;
    class USingleUsableComponent* LUsable;
    class USingleUsableComponent* RUsable;
    class USphereComponent* LUseCollision;
    class USphereComponent* RUseCollision;
    class USkeletalMeshComponent* Body;
    class USceneComponent* DefaultSceneRoot;
    bool Open;
    bool LUsed;
    bool RUsed;
    int32 Uses;
    float LaunchAnimTIme;
    FBP_Mainfacility_ShieldEmitter_ForceFieldProjector_CShieldDeactivated ShieldDeactivated;
    void ShieldDeactivated();
    float LaunchPower;
    class UParticleSystemComponent* LSmokeParticles;
    class UParticleSystemComponent* RSmokeParticles;
    class UMaterialInstanceDynamic* LightMaterial;

    void OnRep_Open();
    void Expose();
    void GetConnectorPoints(FTransform& ConnectorL, FTransform& ConnectorR);
    void LaunchBattery(class ABP_ShieldBattery_C* Battery, class USceneComponent* Direction, float force);
    void OnRep_RUsed();
    void OnRep_LUsed();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__RUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__LUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void LUse_All();
    void RUsed_All();
    void Launch plates();
    void Cheat_Deactivate();
    void BndEvt__RUsable_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool CanUse);
    void UpdateRHologram();
    void BndEvt__LUsable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void UpdateLHologram();
    void ExecuteUbergraph_BP_Mainfacility_ShieldEmitter_ForceFieldProjector(int32 EntryPoint);
    void ShieldDeactivated__DelegateSignature();
};

#endif
