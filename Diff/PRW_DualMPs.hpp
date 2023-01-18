#ifndef UE4SS_SDK_PRW_DualMPs_HPP
#define UE4SS_SDK_PRW_DualMPs_HPP

class APRW_DualMPs_C : public AItemPreviewActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh1;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;

    void OnSkinItem(class USkinEffect* Skin);
    void ExecuteUbergraph_PRW_DualMPs(int32 EntryPoint);
};

#endif
