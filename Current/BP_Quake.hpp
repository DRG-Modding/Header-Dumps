#ifndef UE4SS_SDK_BP_Quake_HPP
#define UE4SS_SDK_BP_Quake_HPP

class ABP_Quake_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* EarthQuakeSound;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Quake(int32 EntryPoint);
};

#endif
