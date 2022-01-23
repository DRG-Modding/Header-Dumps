#ifndef UE4SS_SDK_POPUP_KickPlayerReply_HPP
#define UE4SS_SDK_POPUP_KickPlayerReply_HPP

class UPOPUP_KickPlayerReply_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_Return;
    class UTextBlock* DATA_Reason;
    class UTextBlock* TXT_KickHeader;
    class UTextBlock* TXT_ReasonHeader;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_POPUP_KickPlayerReply(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
};

#endif
