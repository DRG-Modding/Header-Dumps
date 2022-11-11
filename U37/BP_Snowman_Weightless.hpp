#ifndef UE4SS_SDK_BP_Snowman_Weightless_HPP
#define UE4SS_SDK_BP_Snowman_Weightless_HPP

class ABP_Snowman_Weightless_C : public AActor
{
    class UFloatingPawnMovement* FloatingPawnMovement;
    class UStaticMeshComponent* SM_Xmas_TopHat;
    class UStaticMeshComponent* SM_Xmas_SnowmanSplit_02;
    class UStaticMeshComponent* SM_Xmas_SnowmanSplit_01;
    class USceneComponent* DefaultSceneRoot;
    class URotatingMovementComponent* RotatingMovement;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    class APlayerCharacter* KickedBy;
    TArray<class UStaticMesh*> MeshesToChooseFrom;
    TArray<class UMaterialInterface*> Mats_Wrapper;
    TArray<class UMaterialInterface*> Mats_Note;
    int32 RandomPresentSound;

    void OnRep_KickSoundLocation();
};

#endif
