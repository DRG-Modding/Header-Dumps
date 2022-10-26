#ifndef UE4SS_SDK_BP_TetherDispenser_HPP
#define UE4SS_SDK_BP_TetherDispenser_HPP

class ABP_TetherDispenser_C : public ABP_ItemDispenserBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class USkeletalMeshComponent* SkeletalMesh;
    TArray<class ABP_TransmitterNode_C*> Tethers;
    float CustomConnectionRange;

    void ReceiveBeginPlay();
    void OnOpenChanged(bool Open);
    void OnPickedUpItem(class AActor* Item);
    void ExecuteUbergraph_BP_TetherDispenser(int32 EntryPoint);
};

#endif
