#ifndef UE4SS_SDK_BP_JetBootsBoxLid_HPP
#define UE4SS_SDK_BP_JetBootsBoxLid_HPP

class ABP_JetBootsBoxLid_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* ExplosionSound;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* Scene;
    bool CanTriggerSound;

    void ReceiveBeginPlay();
    void BndEvt__BP_JetBootsBoxLid_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_JetBootsBoxLid(int32 EntryPoint);
};

#endif
