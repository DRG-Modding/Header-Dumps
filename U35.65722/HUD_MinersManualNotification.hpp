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
    void ExecuteUbergraph_HUD_MinersManualNotification(int32 EntryPoint, FExecuteUbergraph_HUD_MinersManualNotificationK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FText K2Node_CustomEvent_Text, float K2Node_CustomEvent_TimeOnScreen, FSlateColor K2Node_MakeStruct_SlateColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

#endif
