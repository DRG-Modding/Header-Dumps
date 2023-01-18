#ifndef UE4SS_SDK_Announcement_Label_HPP
#define UE4SS_SDK_Announcement_Label_HPP

class UAnnouncement_Label_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnnounceAnim;
    class UImage* Icon;
    class UTextBlock* Label;
    class UCanvasPanel* Root;
    FText Text;
    FLinearColor TextColor;
    class UTexture2D* IconTexture;
    FLinearColor Icon Tint;
    float StartDelay;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_Label(int32 EntryPoint);
};

#endif
