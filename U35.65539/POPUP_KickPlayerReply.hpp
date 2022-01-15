#ifndef UE4SS_SDK_POPUP_KickPlayerReply_HPP
#define UE4SS_SDK_POPUP_KickPlayerReply_HPP

class UPOPUP_KickPlayerReply_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBlurBackground_C* BlurBackground;
    UBasic_ButtonScalable2_C* BTN_Return;
    UTextBlock* DATA_Reason;
    UTextBlock* TXT_KickHeader;
    UTextBlock* TXT_ReasonHeader;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_POPUP_KickPlayerReply(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
