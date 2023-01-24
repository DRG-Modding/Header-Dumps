#ifndef UE4SS_SDK_TOOLTIP_ServerWorkEnvironment_HPP
#define UE4SS_SDK_TOOLTIP_ServerWorkEnvironment_HPP

class UTOOLTIP_ServerWorkEnvironment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class URichTextBlock* DATALockMessage;
    class UHorizontalBox* LockedBar;
    FText Text;

    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment(int32 EntryPoint);
};

#endif
