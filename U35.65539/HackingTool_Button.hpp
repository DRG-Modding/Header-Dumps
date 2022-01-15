#ifndef UE4SS_SDK_HackingTool_Button_HPP
#define UE4SS_SDK_HackingTool_Button_HPP

class UHackingTool_Button_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Image_C* Background;
    UBasic_Image_C* Basic_Image;
    UBasic_Label_C* Basic_Label;
    UUI_AdvancedLabel_C* ButtonLabel;
    UBasic_Image_C* Content;
    UBasic_Image_C* outline;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HackingTool_Button(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime);
}

#endif
