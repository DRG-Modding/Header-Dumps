#ifndef UE4SS_SDK_BP_MinersManual_Hologram_HPP
#define UE4SS_SDK_BP_MinersManual_Hologram_HPP

class ABP_MinersManual_Hologram_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Spider_Grunt_GuardA;
    class UStaticMeshComponent* SM_Spider_Grunt_A;
    class USkeletalMeshComponent* SK_Flier_Grabber_A;
    class USkeletalMeshComponent* SK_Flier_Heavy;
    class USkeletalMeshComponent* SK_Flier_Triple_Shooter;
    class USkeletalMeshComponent* SK_Flier_Shooter;
    class USkeletalMeshComponent* SK_Spider_Tank_A;
    class USceneComponent* Scene;
    class UStaticMeshComponent* coneLight;
    class UStaticMeshComponent* MinersManual;
    class USceneComponent* DefaultSceneRoot;
    float Rot speed;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_MinersManual_Hologram(int32 EntryPoint);
};

#endif
