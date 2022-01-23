#ifndef UE4SS_SDK_EVENT_DropPodDefense_Uplink_HPP
#define UE4SS_SDK_EVENT_DropPodDefense_Uplink_HPP

class AEVENT_DropPodDefense_Uplink_C : public AEVENT_DropPodDefense_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void EventSucceded();
    void EventFailed();
    void ExecuteUbergraph_EVENT_DropPodDefense_Uplink(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
};

#endif
