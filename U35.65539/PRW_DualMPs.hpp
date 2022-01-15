#ifndef UE4SS_SDK_PRW_DualMPs_HPP
#define UE4SS_SDK_PRW_DualMPs_HPP

class APRW_DualMPs_C : AItemPreviewActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh1;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;

    void OnSkinItem(USkinEffect* Skin);
    void ExecuteUbergraph_PRW_DualMPs(int32 EntryPoint, USkinEffect* K2Node_Event_skin);
}

#endif
