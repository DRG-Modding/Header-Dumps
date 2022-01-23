#ifndef UE4SS_SDK_BP_TriggerBase_HPP
#define UE4SS_SDK_BP_TriggerBase_HPP

class ABP_TriggerBase_C : public ASpawnTrigger
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void SendMessage(TArray<class ABP_TutorialTriggerManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_TutorialTriggerManager_C* CallFunc_Array_Get_Item);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TriggerBase(int32 EntryPoint);
};

#endif
