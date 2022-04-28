#ifndef UE4SS_SDK_BP_HeightenedSense_Discharge_HPP
#define UE4SS_SDK_BP_HeightenedSense_Discharge_HPP

class ABP_HeightenedSense_Discharge_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HeightenedSense_Discharge(int32 EntryPoint);
};

#endif
