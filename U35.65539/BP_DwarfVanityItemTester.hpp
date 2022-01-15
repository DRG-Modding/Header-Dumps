#ifndef UE4SS_SDK_BP_DwarfVanityItemTester_HPP
#define UE4SS_SDK_BP_DwarfVanityItemTester_HPP

class ABP_DwarfVanityItemTester_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextRenderComponent* TextRender;
    USceneComponent* SharedRoot;
    bool PlayAnim;
    FSingleAnimationPlayData Animation;
    FText Asset Name;
    bool ToggleBody;
    USkeletalMesh* Armor Mesh;
    bool SingleChannelHair;
    USkeletalMesh* Headwear Mesh;
    UMaterialInterface* SkinMaterial;
    UMaterialInterface* ArmorMaterial;
    bool ToggleHead;
    USkeletalMesh* Head Mesh;
    UMaterialInterface* HeadwearOverride;
    UMaterialInterface* BaseHairMaterial;
    UMaterialInterface* BeardOverride;
    bool ToggleHair;
    USkeletalMesh* Beard Mesh;
    USkeletalMesh* Moustache Mesh;
    USkeletalMesh* Sideburns Mesh;
    UMaterialInterface* MoustacheOverride;
    UMaterialInterface* SideburnOverride;
    USkeletalMesh* Eyebrows Mesh;
    UMaterialInterface* EyebrowsOverride;
    USkeletalMeshComponent* Armor;
    USkeletalMeshComponent* NewVar_0;

    void SetAnim(USkeletalMeshComponent* Target);
    void SetBeardPiece(USkeletalMesh* Mesh, UMaterialInterface* HairOverride, const FTransform Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable, uint8 K2Node_Select_Default);
    void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, const FTransform Temp_struct_Variable, const FTransform Temp_struct_Variable_1, USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, const FTransform Temp_struct_Variable_2, USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_2);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DwarfVanityItemTester(int32 EntryPoint);
}

#endif
