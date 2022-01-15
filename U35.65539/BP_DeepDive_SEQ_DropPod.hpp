#ifndef UE4SS_SDK_BP_DeepDive_SEQ_DropPod_HPP
#define UE4SS_SDK_BP_DeepDive_SEQ_DropPod_HPP

class ABP_DeepDive_SEQ_DropPod_C : AActor
{
    UParticleSystemComponent* ParticleSystem;
    USceneComponent* hull;
    USkeletalMeshComponent* SK_DropPod_Drill;
    USkeletalMeshComponent* SK_DropPod_Airlock;
    UStaticMeshComponent* Spot2;
    UStaticMeshComponent* Spot1;
    USceneComponent* Scene;
    UStaticMeshComponent* Cone2;
    USpotLightComponent* SpotLight2;
    USpotLightComponent* SpotLight1;
    UStaticMeshComponent* Cone1;
    UStaticMeshComponent* SM_DropPod_Hull;
    UStaticMeshComponent* SM_DropPod_Hull_NoCol;
    USceneComponent* DefaultSceneRoot;
}

#endif
