#ifndef UE4SS_SDK_EVENT_DropPodDefense_Refuel_HPP
#define UE4SS_SDK_EVENT_DropPodDefense_Refuel_HPP

class AEVENT_DropPodDefense_Refuel_C : public AEVENT_DropPodDefense_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void EventSucceded();
    void EventFailed();
    void ExecuteUbergraph_EVENT_DropPodDefense_Refuel(int32 EntryPoint);
};

#endif
