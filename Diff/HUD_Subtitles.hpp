#ifndef UE4SS_SDK_HUD_Subtitles_HPP
#define UE4SS_SDK_HUD_Subtitles_HPP

class UHUD_Subtitles_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_ShoutBox_C* PlayerShout;
    class UUI_Subtitle_C* SubtitleShout;
    class UCommunicationComponent* Communication;

    void OnPlayerShoutStart(class APlayerCharacter* InSender, FText InText, float InDuration);
    void OnSubtitleShoutStart(class APlayerCharacter* InSender, FText InText, float InDuration);
    void Construct();
    void ExecuteUbergraph_HUD_Subtitles(int32 EntryPoint);
};

#endif
