#ifndef UE4SS_SDK_HUD_MapTool_HPP
#define UE4SS_SDK_HUD_MapTool_HPP

class UHUD_MapTool_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* MainTurnOn;
    class UWidgetAnimation* MapTurnOn;
    class UWidgetAnimation* RecordingDot;
    class UUI_AdvancedLabel_C* AlignLabel;
    class UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBig;
    class UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBig_C_0;
    class UBorder* Border_0;
    class UImage* ImgrecordingDot;
    class UUI_AdvancedLabel_C* InputLabel;
    class UImage* MapView;
    class UTextBlock* TEXT_Header;
    class UTextBlock* TEXT_Header_1;
    class UTextBlock* TEXT_Header_2;
    class UTextBlock* TEXT_Recording;
    class UUI_AdvancedLabel_C* ZoomLabel;
    class APlayerCharacter* Character;
    bool MapVisible;
    float AnimScrub;
    float AnimScrubPrev;

    void Construct();
    void OnToggleMapTool(bool Visible);
    void PreConstruct(bool IsDesignTime);
    void OnMainTurnOnFinished();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_HUD_MapTool(int32 EntryPoint);
};

#endif
