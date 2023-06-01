#ifndef UE4SS_SDK_HackingTool_Controller_HPP
#define UE4SS_SDK_HackingTool_Controller_HPP

class UHackingTool_Controller_C : public UHackingToolWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UOverlay* ContentOverlay;
    class UHackingToolWidget* HackingWidget;
    TSoftClassPtr<UHackingToolWidget> PreviewWidget;

    void ReceiveHackingStageCompleted(int32 InNextStage, int32 InTotalStages);
    void ReceivedUnequipTool();
    void ReceivedHackingComplete(bool InSuccess);
    void SpawnHackingWidget(TSoftClassPtr<UHackingToolWidget> InWidget, class UHackingUsableComponent* InHackingUsable, class AHackingToolItem* InHackingTool);
    void PreConstruct(bool IsDesignTime);
    void StartHackingCustom(TSoftClassPtr<UHackingToolWidget> InWidget, class UHackingUsableComponent* InHackingUsable, class AHackingToolItem* InHackingTool);
    void ReceiveHackingStarted();
    void ReceiveHackingToolUnequipped();
    void ReceiveActionClick();
    void ReceiveActionPressed();
    void ReceiveActionReleased();
    void ExecuteUbergraph_HackingTool_Controller(int32 EntryPoint);
};

#endif
