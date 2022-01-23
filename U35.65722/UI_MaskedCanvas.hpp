#ifndef UE4SS_SDK_UI_MaskedCanvas_HPP
#define UE4SS_SDK_UI_MaskedCanvas_HPP

class UUI_MaskedCanvas_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* Content;
    class URetainerBox* MaskRetainer;
    class UMaterialInstanceDynamic* Material;
    class UTexture* Mask;

    void SetMask(class UTexture* Texture);
    void UpdateMaterial(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_MaskedCanvas(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
