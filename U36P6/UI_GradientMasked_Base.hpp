#ifndef UE4SS_SDK_UI_GradientMasked_Base_HPP
#define UE4SS_SDK_UI_GradientMasked_Base_HPP

class UUI_GradientMasked_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<ENUM_MaskedGradientTypes::Type> GradientType;
    class UMaterialInstanceDynamic* Material;
    class UMaterialInterface* MaterialTemplate;

    void GetDynamicMaterial(class UMaterialInstanceDynamic*& Material);
    void Refresh();
    void GetMaterialTemplate(TEnumAsByte<ENUM_MaskedGradientTypes::Type> GradientType, class UMaterialInterface*& OutTemplate);
    void PreConstruct(bool IsDesignTime);
    void OnMaterialRefreshed();
    void ExecuteUbergraph_UI_GradientMasked_Base(int32 EntryPoint);
};

#endif
