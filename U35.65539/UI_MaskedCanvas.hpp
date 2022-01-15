#ifndef UE4SS_SDK_UI_MaskedCanvas_HPP
#define UE4SS_SDK_UI_MaskedCanvas_HPP

class UUI_MaskedCanvas_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* Content;
    URetainerBox* MaskRetainer;
    UMaterialInstanceDynamic* Material;
    UTexture* Mask;

    void SetMask(UTexture* Texture);
    void UpdateMaterial(bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_MaskedCanvas(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
