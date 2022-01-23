#ifndef UE4SS_SDK_UI_GradientMasked_Base_HPP
#define UE4SS_SDK_UI_GradientMasked_Base_HPP

class UUI_GradientMasked_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<ENUM_MaskedGradientTypes::Type> GradientType;
    class UMaterialInstanceDynamic* Material;
    class UMaterialInterface* MaterialTemplate;

    void GetDynamicMaterial(class UMaterialInstanceDynamic*& Material);
    void Refresh(class UMaterialInstanceDynamic* OldMaterial, class UMaterialInterface* NewTemplate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInterface* CallFunc_GetMaterialTemplate_OutTemplate, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void GetMaterialTemplate(TEnumAsByte<ENUM_MaskedGradientTypes::Type> GradientType, class UMaterialInterface*& OutTemplate, TEnumAsByte<ENUM_MaskedGradientTypes::Type> Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInterface* Temp_object_Variable_7, class UMaterialInterface* Temp_object_Variable_8, class UMaterialInterface* Temp_object_Variable_9, class UMaterialInterface* Temp_object_Variable_10, class UMaterialInterface* Temp_object_Variable_11, class UMaterialInterface* K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void OnMaterialRefreshed();
    void ExecuteUbergraph_UI_GradientMasked_Base(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
