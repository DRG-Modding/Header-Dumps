#ifndef UE4SS_SDK_HUD_MinersManualNotification_HPP
#define UE4SS_SDK_HUD_MinersManualNotification_HPP

class UHUD_MinersManualNotification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UImage* Image_Background;
    class UTextBlock* PageText;
    class UTextBlock* TextBlock_Headline;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;

    void PreConstruct(bool IsDesignTime);
    void Show(FText Text, float TimeOnScreen);
    void OnFinished();
    void ExecuteUbergraph_HUD_MinersManualNotification(int32 EntryPoint);
};

#endif
