#ifndef UE4SS_SDK_BP_SupplyPod_Marker_HPP
#define UE4SS_SDK_BP_SupplyPod_Marker_HPP

class ABP_SupplyPod_Marker_C : AItemMarker
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* SupplyPod_SingleMesh;
    UWidgetComponent* Widget;
    USceneComponent* DefaultSceneRoot;
    UMaterialInstanceDynamic* Material;
    FLinearColor StartColor;
    FName ColorName;

    void SetMaterials(UMaterial* ParentMaterial, UMeshComponent* Mesh, UMaterialInstanceDynamic*& DynamicMaterial, int32 CallFunc_GetNumMaterials_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_SetMaterials_DynamicMaterial, FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue);
    void ReceiveBeginPlay();
    void OnMarkerValidChanged(bool Valid);
    void OnMarkerVisibilityChanged(bool Visible);
    void ExecuteUbergraph_BP_SupplyPod_Marker(int32 EntryPoint, bool Temp_bool_Variable, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_Valid, bool K2Node_Event_visible, FLinearColor K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, bool CallFunc_IsHUDVisible_ReturnValue);
}

#endif
