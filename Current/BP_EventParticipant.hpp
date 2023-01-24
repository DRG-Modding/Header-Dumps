#ifndef UE4SS_SDK_BP_EventParticipant_HPP
#define UE4SS_SDK_BP_EventParticipant_HPP

class ABP_EventParticipant_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(class AGameEvent* GameEvent);
    void OnEventFinished(bool eventSuccess);
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void ExecuteUbergraph_BP_EventParticipant(int32 EntryPoint);
};

#endif
