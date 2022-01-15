#ifndef UE4SS_SDK_BP_InfectedMulePreplacement_HPP
#define UE4SS_SDK_BP_InfectedMulePreplacement_HPP

class ABP_InfectedMulePreplacement_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_InfectedMulePreplacement(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue);
}

#endif
