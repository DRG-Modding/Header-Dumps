#ifndef UE4SS_SDK_BP_Tentacle_ClawParts_HPP
#define UE4SS_SDK_BP_Tentacle_ClawParts_HPP

class ABP_Tentacle_ClawParts_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_ClawDebris_04;
    class UStaticMeshComponent* SM_ClawDebris_01;
    class UStaticMeshComponent* SM_ClawDebris_03;
    class UStaticMeshComponent* SM_ClawDebris_02;
    class USceneComponent* Scene;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Tentacle_ClawParts(int32 EntryPoint);
};

#endif
