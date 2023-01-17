#ifndef UE4SS_SDK_Announcement_CollectedEverything_HPP
#define UE4SS_SDK_Announcement_CollectedEverything_HPP

class UAnnouncement_CollectedEverything_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnnounceAnim;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_83;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_85;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_86;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_87;
    class UBorder* Border_1;
    class URichTextBlock* RichMessageText;
    class UCanvasPanel* Root;
    float StartDelay;
    FText Message;

    void SetMessage(FText Text);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_CollectedEverything(int32 EntryPoint);
};

#endif
