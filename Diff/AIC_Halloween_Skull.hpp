#ifndef UE4SS_SDK_AIC_Halloween_Skull_HPP
#define UE4SS_SDK_AIC_Halloween_Skull_HPP

class AAIC_Halloween_Skull_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBehaviorTree* BehaviorTree;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Halloween_Skull(int32 EntryPoint);
};

#endif
