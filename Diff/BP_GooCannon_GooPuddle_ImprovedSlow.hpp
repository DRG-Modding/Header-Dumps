#ifndef UE4SS_SDK_BP_GooCannon_GooPuddle_ImprovedSlow_HPP
#define UE4SS_SDK_BP_GooCannon_GooPuddle_ImprovedSlow_HPP

class ABP_GooCannon_GooPuddle_ImprovedSlow_C : public ABP_GooCannon_GooPuddle_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_GooCannon_GooPuddle_ImprovedSlow(int32 EntryPoint);
};

#endif
