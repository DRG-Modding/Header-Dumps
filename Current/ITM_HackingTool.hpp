#ifndef UE4SS_SDK_ITM_HackingTool_HPP
#define UE4SS_SDK_ITM_HackingTool_HPP

class AITM_HackingTool_C : public AHackingToolItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UHackingTool_Controller_C* HackingControllerWidget;

    void AudioOnFail(class USoundCue* InFailCue, class UDialogDataAsset* InShout);
    void ReceiveHackingStarted();
    void OnHackingCompleted(bool InSuccess);
    void OnRequestUnequip();
    void RecieveUnequipped();
    void ReceiveActionClick();
    void ReceivedActionPressed();
    void ReceivedActionReleased();
    void ExecuteUbergraph_ITM_HackingTool(int32 EntryPoint);
};

#endif
