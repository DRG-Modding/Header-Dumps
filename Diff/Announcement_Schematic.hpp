#ifndef UE4SS_SDK_Announcement_Schematic_HPP
#define UE4SS_SDK_Announcement_Schematic_HPP

class UAnnouncement_Schematic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnnounceAnim;
    class UImage* Image_167;
    class UCanvasPanel* Root;
    class UBasic_Label_C* TitleLabel;
    class UUI_Forge_Schematic_C* UI_Forge_Schematic;
    float StartDelay;
    class USchematic* Schematic;
    FText Title;
    float TitleProgress;

    void SetTitleProgress(float InProgress);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_Schematic(int32 EntryPoint);
};

#endif
