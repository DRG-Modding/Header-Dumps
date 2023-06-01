#ifndef UE4SS_SDK_BP_SpacerigTrashCompactor_HPP
#define UE4SS_SDK_BP_SpacerigTrashCompactor_HPP

class ABP_SpacerigTrashCompactor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInstancedStaticMeshComponent* InstancedStaticMesh;
    class USceneComponent* DefaultSceneRoot;
    float FadeOut_Scale_7287E2514093D4CF47DDFC8BAD4637B9;
    TEnumAsByte<ETimelineDirection::Type> FadeOut__Direction_7287E2514093D4CF47DDFC8BAD4637B9;
    class UTimelineComponent* FadeOut;
    TArray<FTransform> Instance Transforms;
    TArray<FVector> MoveVectors;
    TArray<FVector> Rotators;
    float float headSpeed;
    int32 NumberOfHeads;
    TArray<class UStaticMesh*> StaticMeshesList;
    float StartTime;
    float Scale;
    int32 Seed;
    FRandomStream RandomStream;
    TArray<class UStaticMeshComponent*> StaticMeshComponents;
    TArray<class UStaticMesh*> TrashList;
    TArray<class UStaticMesh*> DecorationsList;
    TArray<class UStaticMesh*> LeafLoverList;
    TArray<class UStaticMesh*> RivalsList;

    void ChooseList();
    void AddStaticMeshes(TArray<FTransform>& Transforms);
    void SetupInstances();
    void FadeOut__FinishedFunc();
    void FadeOut__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SpacerigTrashCompactor(int32 EntryPoint);
};

#endif
