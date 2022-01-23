#ifndef UE4SS_SDK_UI_HackingTool_Controller_HPP
#define UE4SS_SDK_UI_HackingTool_Controller_HPP

class UUI_HackingTool_Controller_C : public UHackingToolWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UOverlay* ContentOverlay;
    class UHackingToolWidget* HackingWidget;
    TSoftClassPtr<UHackingToolWidget> PreviewWidget;

    void ReceiveHackingStageCompleted(int32 InNextStage, int32 InTotalStages);
    void ReceivedUnequipTool();
    void ReceivedHackingComplete(bool InSuccess);
    void SpawnHackingWidget(TSoftClassPtr<UHackingToolWidget> InWidget, class UHackingUsableComponent* InHackingUsable, class AHackingToolItem* InHackingTool, TSoftClassPtr<UHackingToolWidget> DefaultWidget, TSubclassOf<class UHackingToolWidget> WidgetClass, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSubclassOf<class UUserWidget> CallFunc_LoadWidgetClass_ReturnValue, TSubclassOf<class UHackingToolWidget> K2Node_ClassDynamicCast_AsHacking_Tool_Widget, bool K2Node_ClassDynamicCast_bSuccess, FSpawnHackingWidgetK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FSpawnHackingWidgetK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FSpawnHackingWidgetK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UHackingToolWidget* CallFunc_Create_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ReceiveClick();
    void StartHackingCustom(TSoftClassPtr<UHackingToolWidget> InWidget, class UHackingUsableComponent* InHackingUsable, class AHackingToolItem* InHackingTool);
    void ReceiveHackingStarted();
    void ReceiveHackingToolUnequipped();
    void ExecuteUbergraph_UI_HackingTool_Controller(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, TSoftClassPtr<UHackingToolWidget> K2Node_CustomEvent_InWidget, class UHackingUsableComponent* K2Node_CustomEvent_InHackingUsable, class AHackingToolItem* K2Node_CustomEvent_InHackingTool, TSoftClassPtr<UHackingToolWidget> CallFunc_GetHackingWidgetType_ReturnValue);
};

#endif
