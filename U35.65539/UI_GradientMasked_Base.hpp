#ifndef UE4SS_SDK_UI_GradientMasked_Base_HPP
#define UE4SS_SDK_UI_GradientMasked_Base_HPP

class UUI_GradientMasked_Base_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<ENUM_MaskedGradientTypes::Type> GradientType;
    UMaterialInstanceDynamic* Material;
    UMaterialInterface* MaterialTemplate;

    void GetDynamicMaterial(UMaterialInstanceDynamic*& Material);
    void Refresh(UMaterialInstanceDynamic* OldMaterial, UMaterialInterface* NewTemplate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, UMaterialInterface* CallFunc_GetMaterialTemplate_OutTemplate, bool CallFunc_BooleanOR_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void GetMaterialTemplate(uint8 GradientType, UMaterialInterface*& OutTemplate, uint8 Temp_byte_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, UMaterialInterface* Temp_object_Variable_2, UMaterialInterface* Temp_object_Variable_3, UMaterialInterface* Temp_object_Variable_4, UMaterialInterface* Temp_object_Variable_5, UMaterialInterface* Temp_object_Variable_6, UMaterialInterface* Temp_object_Variable_7, UMaterialInterface* Temp_object_Variable_8, UMaterialInterface* Temp_object_Variable_9, UMaterialInterface* Temp_object_Variable_10, UMaterialInterface* Temp_object_Variable_11, UMaterialInterface* K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void OnMaterialRefreshed();
    void ExecuteUbergraph_UI_GradientMasked_Base(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
