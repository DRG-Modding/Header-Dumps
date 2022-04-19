#ifndef UE4SS_SDK_UI_RoundedCanvas_HPP
#define UE4SS_SDK_UI_RoundedCanvas_HPP

class UUI_RoundedCanvas_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* Content;
    class URetainerBox* MaskRetainer;
    class UMaterialInstanceDynamic* Material;
    float Radius;
    float EdgeSharpness;

    void OnPaint(FPaintContext& Context);
    void UpdateMaterial();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RoundedCanvas(int32 EntryPoint);
};

#endif
