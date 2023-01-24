#ifndef UE4SS_SDK_UI_Subtitle_HPP
#define UE4SS_SDK_UI_Subtitle_HPP

class UUI_Subtitle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* SubtitleSender;
    class UTextBlock* SubtitleText;
    class UCommunicationComponent* Communication;
    FTimerHandle TimeoutHandle;

    void OnShoutEnd();
    void ShoutStart(class APlayerCharacter* InSender, FText InText, float InDuration);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Subtitle(int32 EntryPoint);
};

#endif
