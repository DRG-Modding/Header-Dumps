#ifndef UE4SS_SDK_BP_GooCannon_GooPuddle_ImprovedSlow_HPP
#define UE4SS_SDK_BP_GooCannon_GooPuddle_ImprovedSlow_HPP

class ABP_GooCannon_GooPuddle_ImprovedSlow_C : UBP_GooCannon_GooPuddle_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_GooCannon_GooPuddle_ImprovedSlow(int32 EntryPoint, AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds);
}

#endif
