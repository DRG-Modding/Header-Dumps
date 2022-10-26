#ifndef UE4SS_SDK_ESI_PlagueLarva_HPP
#define UE4SS_SDK_ESI_PlagueLarva_HPP

class AESI_PlagueLarva_C : public AEnemyShowroomItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_PlagueLarva(int32 EntryPoint);
};

#endif
