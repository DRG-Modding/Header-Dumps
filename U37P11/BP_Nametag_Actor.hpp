#ifndef UE4SS_SDK_BP_Nametag_Actor_HPP
#define UE4SS_SDK_BP_Nametag_Actor_HPP

class ABP_Nametag_Actor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Nametag_Actor(int32 EntryPoint);
};

#endif
