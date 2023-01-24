#ifndef UE4SS_SDK_TSK_FindObjectToScan_HPP
#define UE4SS_SDK_TSK_FindObjectToScan_HPP

class UTSK_FindObjectToScan_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float SearchRadius;
    FBlackboardKeySelector Target;

    bool IsValidObjectToScan(class AActor* Object, class AAIC_Prospector_C* Prospector);
    void SelectRandomTarget(TArray<class AActor*>& Actors, class AAIC_Prospector_C* Prospector, class AActor*& Target);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindObjectToScan(int32 EntryPoint);
};

#endif
