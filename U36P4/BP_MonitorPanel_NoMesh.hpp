#ifndef UE4SS_SDK_BP_MonitorPanel_NoMesh_HPP
#define UE4SS_SDK_BP_MonitorPanel_NoMesh_HPP

class ABP_MonitorPanel_NoMesh_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MonitorPanel_NoMesh(int32 EntryPoint);
};

#endif
