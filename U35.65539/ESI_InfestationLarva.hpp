#ifndef UE4SS_SDK_ESI_InfestationLarva_HPP
#define UE4SS_SDK_ESI_InfestationLarva_HPP

class AESI_InfestationLarva_C : UEnemyShowroomItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_InfestationLarva(int32 EntryPoint);
}

#endif
