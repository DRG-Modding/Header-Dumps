#ifndef UE4SS_SDK_UI_ShoutBox_HPP
#define UE4SS_SDK_UI_ShoutBox_HPP

class UUI_ShoutBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UImage* CharacterIcon;
    class UTextBlock* DATA_Class;
    class UTextBlock* DATA_Distance;
    class UFSDLabelWidget* DATA_Message;
    class UBasic_HUD_BracketWindowSmall_C* ShoutWindow;
    FTimerHandle TimeoutHandle;
    bool ShoutActive;
    FUI_ShoutBox_COnShoutActiveChanged OnShoutActiveChanged;
    void OnShoutActiveChanged(bool InShoutActive);

    void UpdateBoxWidth();
    void SetDistance(float InDistance);
    void OnShoutEnd();
    void ShoutStart(class APlayerCharacter* InSender, FText InText, float InDuration);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ShoutBox(int32 EntryPoint);
    void OnShoutActiveChanged__DelegateSignature(bool InShoutActive);
};

#endif
