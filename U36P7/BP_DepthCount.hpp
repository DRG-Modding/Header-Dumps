#ifndef UE4SS_SDK_BP_DepthCount_HPP
#define UE4SS_SDK_BP_DepthCount_HPP

class ABP_DepthCount_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget Pinger;
    class UWidgetComponent* DepthWidget;
    class USceneComponent* DefaultSceneRoot;
    class UBP_DepthCountWidget_C* Widget;
    float NewDepth;
    float currentDepth;
    bool PingActive;
    class UAudioComponent* Audio Component;
    FTimerHandle PingHandle;

    void SetPingActive(bool InPingActive);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void DoPing();
    void ExecuteUbergraph_BP_DepthCount(int32 EntryPoint);
};

#endif
