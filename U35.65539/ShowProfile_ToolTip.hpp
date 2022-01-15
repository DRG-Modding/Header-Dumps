#ifndef UE4SS_SDK_ShowProfile_ToolTip_HPP
#define UE4SS_SDK_ShowProfile_ToolTip_HPP

class UShowProfile_ToolTip_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimFadeIn;
    UWidgetAnimation* Intro;
    UImage* BackgroundImage;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UTextBlock* CountryTxt;
    UTextBlock* ServernameTxt;
    URichTextSizable* ShowProfileTxt;
    FText Text;
    FVector2D Position;
    FVector2D Alignment;
    FText serverName;
    FText CountryName;

    void FadeIn(float Duration, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment, UCanvasPanelSlot* CanvasSlot, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
    void SetText(FText ToolTip, FText Region, FText Name);
    void SetTarget(UWidget* Target Widget, bool CallFunc_IsValid_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(UWidget* Owner);
    void ExecuteUbergraph_ShowProfile_ToolTip(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UWidget* K2Node_CustomEvent_Owner, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
