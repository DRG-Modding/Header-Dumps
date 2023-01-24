#ifndef UE4SS_SDK_BP_DeepDive_SEQ_DropPod_HPP
#define UE4SS_SDK_BP_DeepDive_SEQ_DropPod_HPP

class ABP_DeepDive_SEQ_DropPod_C : public AActor
{
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* hull;
    class USkeletalMeshComponent* SK_DropPod_Drill;
    class USkeletalMeshComponent* SK_DropPod_Airlock;
    class UStaticMeshComponent* Spot2;
    class UStaticMeshComponent* Spot1;
    class USceneComponent* Scene;
    class UStaticMeshComponent* Cone2;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* Cone1;
    class UStaticMeshComponent* SM_DropPod_Hull;
    class UStaticMeshComponent* SM_DropPod_Hull_NoCol;
    class USceneComponent* DefaultSceneRoot;

};

#endif
