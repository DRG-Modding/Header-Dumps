#ifndef UE4SS_SDK_BP_TutorialTriggerManager_HPP
#define UE4SS_SDK_BP_TutorialTriggerManager_HPP

class ABP_TutorialTriggerManager_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    FBP_TutorialTriggerManager_CMessageReceived MessageReceived;
    void MessageReceived(FName TriggerName);

    void SendMessage(FName TriggerName);
    void ExecuteUbergraph_BP_TutorialTriggerManager(int32 EntryPoint, FName K2Node_CustomEvent_TriggerName);
    void MessageReceived__DelegateSignature(FName TriggerName);
}

#endif
