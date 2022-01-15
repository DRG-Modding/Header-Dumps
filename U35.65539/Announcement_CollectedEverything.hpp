#ifndef UE4SS_SDK_Announcement_CollectedEverything_HPP
#define UE4SS_SDK_Announcement_CollectedEverything_HPP

class UAnnouncement_CollectedEverything_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnnounceAnim;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_83;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_85;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_86;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_87;
    UBorder* Border_1;
    URichTextBlock* RichMessageText;
    UCanvasPanel* Root;
    float StartDelay;
    FText Message;

    void SetMessage(FText Text);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_CollectedEverything(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
