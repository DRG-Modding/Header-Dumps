#ifndef UE4SS_SDK_HackingTool_Header_HPP
#define UE4SS_SDK_HackingTool_Header_HPP

class UHackingTool_Header_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Label_C* Header_Subtitle;
    UBasic_Label_C* Header_Title;
    FText Title;
    FText Subtitle;

    void SetSubtitle(FText Text);
    void SetTitle(FText Text);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HackingTool_Header(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
