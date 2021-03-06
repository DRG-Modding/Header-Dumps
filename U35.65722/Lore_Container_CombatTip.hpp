#ifndef UE4SS_SDK_Lore_Container_CombatTip_HPP
#define UE4SS_SDK_Lore_Container_CombatTip_HPP

class ULore_Container_CombatTip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UBasic_Window_CutCorner_C* Basic_Window;
    class UImage* Image_ExclamaitonMark;
    class URichTextBlock* RichTextBlock_Body;
    class UTextBlock* TextBlock_Headline;
    class UVerticalBox* VerticalBox_19;
    FText Headline;
    FText Text;

    void SetText(FText Headline, FText Body);
    void PreConstruct(bool IsDesignTime);
    void PlayIntro();
    void ExecuteUbergraph_Lore_Container_CombatTip(int32 EntryPoint, FText K2Node_CustomEvent_Headline, FText K2Node_CustomEvent_Body, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor);
};

#endif
