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
    void SetBeardPiece(class USkeletalMesh* Mesh, class UMaterialInterface* HairOverride, const FTransform Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, TEnumAsByte<EAnimationMode::Type> Temp_byte_Variable, TEnumAsByte<EAnimationMode::Type> Temp_byte_Variable_1, bool Temp_bool_Variable, TEnumAsByte<EAnimationMode::Type> K2Node_Select_Default);
    void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, const FTransform Temp_struct_Variable, const FTransform Temp_struct_Variable_1, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, const FTransform Temp_struct_Variable_2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_2);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DwarfVanityItemTester(int32 EntryPoint);
};

#endif
