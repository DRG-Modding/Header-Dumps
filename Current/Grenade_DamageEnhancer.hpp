#ifndef UE4SS_SDK_Grenade_DamageEnhancer_HPP
#define UE4SS_SDK_Grenade_DamageEnhancer_HPP

class AGrenade_DamageEnhancer_C : public ADamageEnhancer
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Projector;
    class UCapsuleComponent* KeepOut_Capsule;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class UStaticMeshComponent* ProgressBarMesh3;
    class UStaticMeshComponent* ProgressBarMesh2;
    class UStaticMeshComponent* ProgressBarMesh;
    class UStaticMeshComponent* ProgressBarMesh1;
    class USceneComponent* ProgressBarHack;
    class UStaticMeshComponent* GrenadeMesh;
    bool Stick;
    float MaxTotalDamageForDisplay;
    float ActivationDelay;
    float ActivationTime;
    class USoundBase* FieldDeploySound;
    class USoundBase* OutOfEnergySound;
    class USoundBase* AmplifiedShotDamageSound;

    void OnRep_Stick();
    void UserConstructionScript();
    void BndEvt__Grenade_DamageEnhancer_RootCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void UpdateProgressBArHAck();
    void ExecuteUbergraph_Grenade_DamageEnhancer(int32 EntryPoint);
};

#endif
