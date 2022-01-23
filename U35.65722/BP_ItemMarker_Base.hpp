#ifndef UE4SS_SDK_BP_ItemMarker_Base_HPP
#define UE4SS_SDK_BP_ItemMarker_Base_HPP

class ABP_ItemMarker_Base_C : public AItemMarker
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* Material;
    FName ColorName;
    FLinearColor ValidColor;

    void SetMaterials(class UMeshComponent* Mesh, class UMaterialInterface* ParentMaterial, class UMaterialInstanceDynamic*& DynamicMaterial, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void UserConstructionScript(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_SetMaterials_DynamicMaterial);
    void OnMarkerValidChanged(bool Valid);
    void ExecuteUbergraph_BP_ItemMarker_Base(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, bool K2Node_Event_Valid, FLinearColor K2Node_Select_Default);
};

#endif
