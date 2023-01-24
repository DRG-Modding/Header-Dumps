#ifndef UE4SS_SDK_BP_InfectedMulePreplacement_HPP
#define UE4SS_SDK_BP_InfectedMulePreplacement_HPP

class ABP_InfectedMulePreplacement_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_InfectedMulePreplacement(int32 EntryPoint);
};

#endif
