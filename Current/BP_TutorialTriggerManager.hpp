#ifndef UE4SS_SDK_BP_TutorialTriggerManager_HPP
#define UE4SS_SDK_BP_TutorialTriggerManager_HPP

class ABP_TutorialTriggerManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    FBP_TutorialTriggerManager_CMessageReceived MessageReceived;
    void MessageReceived(FName TriggerName);

    void SendMessage(FName TriggerName);
    void ExecuteUbergraph_BP_TutorialTriggerManager(int32 EntryPoint);
    void MessageReceived__DelegateSignature(FName TriggerName);
};

#endif
