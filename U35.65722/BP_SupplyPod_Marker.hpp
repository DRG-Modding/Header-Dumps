#ifndef UE4SS_SDK_BP_SupplyPod_Marker_HPP
#define UE4SS_SDK_BP_SupplyPod_Marker_HPP

class ABP_SupplyPod_Marker_C : public AItemMarker
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* SupplyPod_SingleMesh;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* Material;
    FLinearColor StartColor;
    FName ColorName;

    void SetMaterials(class UMaterial* ParentMaterial, class UMeshComponent* Mesh, class UMaterialInstanceDynamic*& DynamicMaterial, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_SetMaterials_DynamicMaterial, FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue);
    void ReceiveBeginPlay();
    void OnMarkerValidChanged(bool Valid);
    void OnMarkerVisibilityChanged(bool Visible);
    void ExecuteUbergraph_BP_SupplyPod_Marker(int32 EntryPoint, bool Temp_bool_Variable, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_Valid, bool K2Node_Event_visible, FLinearColor K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, bool CallFunc_IsHUDVisible_ReturnValue);
};

#endif
