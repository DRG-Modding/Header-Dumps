#ifndef UE4SS_SDK_BP_SpacerigWeapon_HPP
#define UE4SS_SDK_BP_SpacerigWeapon_HPP

class ABP_SpacerigWeapon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USkeletalMesh* NormalMesh;
    class USkeletalMesh* AnniversaryMesh;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpacerigWeapon(int32 EntryPoint);
};

#endif
