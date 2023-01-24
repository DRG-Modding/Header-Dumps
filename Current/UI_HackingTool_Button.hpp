#ifndef UE4SS_SDK_UI_HackingTool_Button_HPP
#define UE4SS_SDK_UI_HackingTool_Button_HPP

class UUI_HackingTool_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Image_C* Background;
    class UBasic_Image_C* Basic_Image;
    class UBasic_Label_C* Basic_Label;
    class UUI_AdvancedLabel_C* ButtonLabel;
    class UBasic_Image_C* Content;
    class UBasic_Image_C* outline;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HackingTool_Button(int32 EntryPoint);
};

#endif
