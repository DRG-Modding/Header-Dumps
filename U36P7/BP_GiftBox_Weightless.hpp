#ifndef UE4SS_SDK_BP_GiftBox_Weightless_HPP
#define UE4SS_SDK_BP_GiftBox_Weightless_HPP

class ABP_GiftBox_Weightless_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* Mesh;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    class APlayerCharacter* KickedBy;
    TArray<class UStaticMesh*> MeshesToChooseFrom;
    TArray<class UMaterialInterface*> Mats_Wrapper;
    TArray<class UMaterialInterface*> Mats_Note;
    int32 RandomPresentSound;

    void OnRep_KickSoundLocation();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GiftBox_Weightless(int32 EntryPoint);
};

#endif
