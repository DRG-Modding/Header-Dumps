#ifndef UE4SS_SDK_BP_WormholeLocation_Base_HPP
#define UE4SS_SDK_BP_WormholeLocation_Base_HPP

class ABP_WormholeLocation_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void OnPlayerEnterLocation(class APlayerCharacter* Character);
    void OnPlayerLeaveLocation(class APlayerCharacter* Character);
    void ExecuteUbergraph_BP_WormholeLocation_Base(int32 EntryPoint);
};

#endif
