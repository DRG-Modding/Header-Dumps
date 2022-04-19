#ifndef UE4SS_SDK_ITM_OnlineRestricted_HPP
#define UE4SS_SDK_ITM_OnlineRestricted_HPP

class UITM_OnlineRestricted_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_MenuBackground_C* Background;
    class UTextBlock* BlockingPriviligeDebug;
    class UBasic_FlatGradientButton_C* Button_Resolve;
    class UVerticalBox* DescriptionEntryBox;
    class UBasic_Label_C* Header_Label;
    class UScaleBox* informationscalebox;
    class UVerticalBox* OnlineRestrictedDescBox;
    class UButton* sneakyPSPlusButton;
    EBlueprintablePrivilegeResults CurrentOnlineBlockingReason;
    TArray<EBlueprintablePrivilegeResults> PreviewBlocks;
    int32 FontSize;
    FString ResolveInputName;

    void Handle Key Down(const FKeyEvent& KeyEvent, bool& OutHandled, FEventReply& OutReply);
    void SetFontSize(int32 inFontSize);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetBlockSolution(EBlueprintablePrivilegeResults priviligeResults);
    void SetBlockedReasonString(TArray<EBlueprintablePrivilegeResults>& InResults);
    void Should Show Online Restriction(bool& Should Show);
    void PreConstruct(bool IsDesignTime);
    void Resolve Issue();
    void Refresh Block Reasons();
    void Construct();
    void BndEvt__Basic_FlatGradientButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void Show external resolve UI right away();
    void BndEvt__Button_57_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_OnlineRestricted(int32 EntryPoint);
};

#endif
