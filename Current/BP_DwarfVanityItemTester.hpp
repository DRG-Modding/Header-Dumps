#ifndef UE4SS_SDK_BP_DwarfVanityItemTester_HPP
#define UE4SS_SDK_BP_DwarfVanityItemTester_HPP

class ABP_DwarfVanityItemTester_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;
    class USceneComponent* SharedRoot;
    bool PlayAnim;
    FSingleAnimationPlayData Animation;
    FText Asset Name;
    bool ToggleBody;
    class USkeletalMesh* Armor Mesh;
    bool SingleChannelHair;
    class USkeletalMesh* Headwear Mesh;
    class UMaterialInterface* SkinMaterial;
    class UMaterialInterface* ArmorMaterial;
    bool ToggleHead;
    class USkeletalMesh* Head Mesh;
    class UMaterialInterface* HeadwearOverride;
    class UMaterialInterface* BaseHairMaterial;
    class UMaterialInterface* BeardOverride;
    bool ToggleHair;
    class USkeletalMesh* Beard Mesh;
    class USkeletalMesh* Moustache Mesh;
    class USkeletalMesh* Sideburns Mesh;
    class UMaterialInterface* MoustacheOverride;
    class UMaterialInterface* SideburnOverride;
    class USkeletalMesh* Eyebrows Mesh;
    class UMaterialInterface* EyebrowsOverride;
    class USkeletalMeshComponent* Armor;
    class USkeletalMeshComponent* NewVar_0;

    void SetAnim(class USkeletalMeshComponent* Target);
    void SetBeardPiece(class USkeletalMesh* Mesh, class UMaterialInterface* HairOverride);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DwarfVanityItemTester(int32 EntryPoint);
};

#endif
