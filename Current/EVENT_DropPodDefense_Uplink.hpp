#ifndef UE4SS_SDK_EVENT_DropPodDefense_Uplink_HPP
#define UE4SS_SDK_EVENT_DropPodDefense_Uplink_HPP

class AEVENT_DropPodDefense_Uplink_C : public AEVENT_DropPodDefense_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void EventSucceded();
    void EventFailed();
    void ExecuteUbergraph_EVENT_DropPodDefense_Uplink(int32 EntryPoint);
};

#endif
