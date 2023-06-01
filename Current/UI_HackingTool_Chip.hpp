#ifndef UE4SS_SDK_UI_HackingTool_Chip_HPP
#define UE4SS_SDK_UI_HackingTool_Chip_HPP

class UUI_HackingTool_Chip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* Chip_SizeBox;
    class UBasic_Image_C* Img_Bg;
    class UBasic_Image_C* Img_Inside;
    class UBasic_Image_C* Img_Outline;
    float ChipSize;
    FMenuColorAndTint OutlineColor;
    FMenuColorAndTint InsideColor;
    FMenuColorAndTint BGColor;

    void SetBgColor(FMenuColorAndTint InColor);
    void SetInsideColor(FMenuColorAndTint InColor);
    void SetOutlineColor(FMenuColorAndTint InColor);
    void SetChipSize(float InSize);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HackingTool_Chip(int32 EntryPoint);
};

#endif
