#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSelector_ToolTip_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSelector_ToolTip_HPP

class UITM_Wardrobe_ItemSelector_ToolTip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* DescriptionLabel;
    class UBasic_Label_C* TextLabel;
    class UBorder* ToolTipBorder;

    void SetText(FText Text);
    void ExecuteUbergraph_ITM_Wardrobe_ItemSelector_ToolTip(int32 EntryPoint);
};

#endif
