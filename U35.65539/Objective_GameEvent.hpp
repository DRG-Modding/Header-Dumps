#ifndef UE4SS_SDK_Objective_GameEvent_HPP
#define UE4SS_SDK_Objective_GameEvent_HPP

class UObjective_GameEvent_C : UObjective_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TEXT_EventName;
    AGameEvent* GameEvent;

    void Init();
    void ExecuteUbergraph_Objective_GameEvent(int32 EntryPoint);
}

#endif
