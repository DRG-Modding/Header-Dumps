#ifndef UE4SS_SDK_UI_JettyBoots_Announcement_HPP
#define UE4SS_SDK_UI_JettyBoots_Announcement_HPP

class UUI_JettyBoots_Announcement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeOut;
    class UWidgetAnimation* AnimIntro;
    class UBasic_Label_C* Announcement_Label;
    class UVerticalBox* HighScore_Box;
    class UBasic_Label_C* HighScore_Label;
    class UCanvasPanel* RootCanvas;
    FTimerHandle AnimTimer;

    void Hide();
    void EndFadeOut();
    void BeginFadeOut();
    void StartAnnouncement(FText InText, TEnumAsByte<ENUM_MenuColors::Type> InTextColor, int32 InScore, bool InNewHighScore, float InDelayBeforeFadeOut);
    void Construct();
    void Level Up(int32 InNewLevel);
    void PreConstruct(bool IsDesignTime);
    void Game Over(int32 InScore, bool InNewHighScore);
    void ExecuteUbergraph_UI_JettyBoots_Announcement(int32 EntryPoint);
};

#endif
