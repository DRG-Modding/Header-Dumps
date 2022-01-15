#ifndef UE4SS_SDK_TOOLTIP_ServerWorkEnvironment_HPP
#define UE4SS_SDK_TOOLTIP_ServerWorkEnvironment_HPP

class UTOOLTIP_ServerWorkEnvironment_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    URichTextBlock* DATALockMessage;
    UHorizontalBox* LockedBar;
    FText Text;

    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
