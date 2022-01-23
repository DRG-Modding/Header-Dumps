#ifndef UE4SS_SDK_Objective_GameEvent_HPP
#define UE4SS_SDK_Objective_GameEvent_HPP

class UObjective_GameEvent_C : public UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TEXT_EventName;
    class AGameEvent* GameEvent;

    void Init();
    void ExecuteUbergraph_Objective_GameEvent(int32 EntryPoint);
};

#endif
