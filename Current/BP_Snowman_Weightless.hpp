#ifndef UE4SS_SDK_BP_Snowman_Weightless_HPP
#define UE4SS_SDK_BP_Snowman_Weightless_HPP

class ABP_Snowman_Weightless_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Xmas_TopHat;
    class UStaticMeshComponent* SM_Xmas_SnowmanSplit_02;
    class UStaticMeshComponent* SM_Xmas_SnowmanSplit_01;
    class USceneComponent* DefaultSceneRoot;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    class APlayerCharacter* KickedBy;
    TArray<class UStaticMesh*> MeshesToChooseFrom;
    TArray<class UMaterialInterface*> Mats_Wrapper;
    TArray<class UMaterialInterface*> Mats_Note;
    int32 RandomPresentSound;
    FRandomStream RandomStream;
    int32 RandomSeed;
    TArray<float> SpinSpeed;
    TArray<class UMeshComponent*> MeshParts;
    TArray<FVector> Directions;

    void OnRep_RandomSeed();
    void OnRep_KickSoundLocation();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Snowman_Weightless(int32 EntryPoint);
};

#endif
