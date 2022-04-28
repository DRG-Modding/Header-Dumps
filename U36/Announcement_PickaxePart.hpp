#ifndef UE4SS_SDK_Announcement_PickaxePart_HPP
#define UE4SS_SDK_Announcement_PickaxePart_HPP

class UAnnouncement_PickaxePart_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnnounceAnim;
    class UBorder* InnerBorder;
    class UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon_Item;
    class UBasic_Label_C* NameLabel;
    class UCanvasPanel* Root;
    float StartDelay;
    class UPickaxePart* PickaxePart;
    class UTextureRenderTarget2D* IconRenderTarget;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_PickaxePart(int32 EntryPoint);
};

#endif
