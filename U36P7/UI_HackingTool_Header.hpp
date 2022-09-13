#ifndef UE4SS_SDK_UI_HackingTool_Header_HPP
#define UE4SS_SDK_UI_HackingTool_Header_HPP

class UUI_HackingTool_Header_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* Header_Subtitle;
    class UBasic_Label_C* Header_Title;
    FText Title;
    FText Subtitle;

    void SetSubtitle(FText Text);
    void SetTitle(FText Text);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HackingTool_Header(int32 EntryPoint);
};

#endif
