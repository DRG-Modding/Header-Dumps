#ifndef UE4SS_SDK_BP_TriggerBase_HPP
#define UE4SS_SDK_BP_TriggerBase_HPP

class ABP_TriggerBase_C : public ASpawnTrigger
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void SendMessage();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TriggerBase(int32 EntryPoint);
};

#endif
