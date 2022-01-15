#ifndef UE4SS_SDK_BP_BarrelDispenser_HPP
#define UE4SS_SDK_BP_BarrelDispenser_HPP

class ABP_BarrelDispenser_C : UBP_ItemDispenserBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh;
    UOutlineComponent* outline;
    USphereComponent* Sphere;
    bool StartReady;

    void ManageOutline(float ActiveTime);
    void ReceiveBeginPlay();
    void SetOutline(float ActiveTime);
    void ExecuteUbergraph_BP_BarrelDispenser(int32 EntryPoint, float K2Node_CustomEvent_ActiveTime);
}

#endif
