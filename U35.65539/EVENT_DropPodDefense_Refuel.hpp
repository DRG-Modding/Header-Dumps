#ifndef UE4SS_SDK_EVENT_DropPodDefense_Refuel_HPP
#define UE4SS_SDK_EVENT_DropPodDefense_Refuel_HPP

class AEVENT_DropPodDefense_Refuel_C : UEVENT_DropPodDefense_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void EventSucceded();
    void EventFailed();
    void ExecuteUbergraph_EVENT_DropPodDefense_Refuel(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1);
}

#endif