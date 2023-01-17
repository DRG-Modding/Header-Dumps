#ifndef UE4SS_SDK_BP_Count_Randoms_HPP
#define UE4SS_SDK_BP_Count_Randoms_HPP

class ABP_Count_Randoms_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget1;
    class USceneComponent* DefaultSceneRoot;
    class UBP_Count_Randoms_Widget_C* Widget;
    float Duration;
    float Start;
    float End;
    float NewDepth;
    float currentDepth;

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Count_Randoms(int32 EntryPoint);
};

#endif
