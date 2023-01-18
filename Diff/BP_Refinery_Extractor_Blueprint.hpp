#ifndef UE4SS_SDK_BP_Refinery_Extractor_Blueprint_HPP
#define UE4SS_SDK_BP_Refinery_Extractor_Blueprint_HPP

class ABP_Refinery_Extractor_Blueprint_C : public AActor
{
    class USceneComponent* AttachmentPoint;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* Scene;

    void SetValid(bool IsValid);
    FVector GetAttachementLocation(bool WorldCoordinates);
    void UserConstructionScript();
};

#endif
