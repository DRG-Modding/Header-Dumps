#ifndef UE4SS_SDK_BP_MonitorPanel_NoMesh_HPP
#define UE4SS_SDK_BP_MonitorPanel_NoMesh_HPP

class ABP_MonitorPanel_NoMesh_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MonitorPanel_NoMesh(int32 EntryPoint);
}

#endif
