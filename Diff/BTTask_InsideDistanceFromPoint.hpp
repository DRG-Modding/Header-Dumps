#ifndef UE4SS_SDK_BTTask_InsideDistanceFromPoint_HPP
#define UE4SS_SDK_BTTask_InsideDistanceFromPoint_HPP

class UBTTask_InsideDistanceFromPoint_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector PointKey;
    float Distance;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTTask_InsideDistanceFromPoint(int32 EntryPoint);
};

#endif
