#ifndef UE4SS_SDK_BP_Refinery_Extractor_Blueprint_HPP
#define UE4SS_SDK_BP_Refinery_Extractor_Blueprint_HPP

class ABP_Refinery_Extractor_Blueprint_C : AActor
{
    USceneComponent* AttachmentPoint;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* Scene;

    void SetValid(bool IsValid, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UMaterialInterface* K2Node_Select_Default, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    FVector GetAttachementLocation(bool WorldCoordinatesbool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 K2Node_Select_Default, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale);
    void UserConstructionScript();
}

#endif
