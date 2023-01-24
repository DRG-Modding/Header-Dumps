#ifndef UE4SS_SDK_BP_HeightenedSenses_HPP
#define UE4SS_SDK_BP_HeightenedSenses_HPP

class UBP_HeightenedSenses_C : public UHeightenedSenseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_OnInitialized();
    void OnKilledGrabber_Event(class AActor* Grabber);
    void ExecuteUbergraph_BP_HeightenedSenses(int32 EntryPoint);
};

#endif
