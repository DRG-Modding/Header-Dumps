#ifndef UE4SS_SDK_UI_HackingTool_Controller_HPP
#define UE4SS_SDK_UI_HackingTool_Controller_HPP

class UUI_HackingTool_Controller_C : UHackingToolWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Background;
    UOverlay* ContentOverlay;
    UHackingToolWidget* HackingWidget;
    TSoftClassPtr<UHackingToolWidget> PreviewWidget;

    void ReceiveHackingStageCompleted(int32 InNextStage, int32 InTotalStages);
    void ReceivedUnequipTool();
    void ReceivedHackingComplete(bool InSuccess);
    void SpawnHackingWidget(SoftClassProperty InWidget, UHackingUsableComponent* InHackingUsable, UHackingToolItem* InHackingTool, SoftClassProperty DefaultWidget, TSubclassOf<UHackingToolWidget> WidgetClass, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSubclassOf<UUserWidget> CallFunc_LoadWidgetClass_ReturnValue, TSubclassOf<UHackingToolWidget> K2Node_ClassDynamicCast_AsHacking_Tool_Widget, bool K2Node_ClassDynamicCast_bSuccess, HackingStageCompletedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, HackingUnequipDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, HackingCompleteDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, UHackingToolWidget* CallFunc_Create_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ReceiveClick();
    void StartHackingCustom(SoftClassProperty InWidget, UHackingUsableComponent* InHackingUsable, UHackingToolItem* InHackingTool);
    void ReceiveHackingStarted();
    void ReceiveHackingToolUnequipped();
    void ExecuteUbergraph_UI_HackingTool_Controller(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, SoftClassProperty K2Node_CustomEvent_InWidget, UHackingUsableComponent* K2Node_CustomEvent_InHackingUsable, UHackingToolItem* K2Node_CustomEvent_InHackingTool, SoftClassProperty CallFunc_GetHackingWidgetType_ReturnValue);
}

#endif
