#ifndef UE4SS_SDK_BP_FriendlyParasite_Mechanical_HPP
#define UE4SS_SDK_BP_FriendlyParasite_Mechanical_HPP

class ABP_FriendlyParasite_Mechanical_C : public ABP_FriendlyParasite_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* particle_Trail;
    class UStaticMeshComponent* StaticMesh;
    class UAudioComponent* ShredderIdle;
    class UPointLightComponent* PointLight;
    FVector LastLocation;
    FVector CurrentDireciton;

    void ReceiveBeginPlay();
    void TurnTowardsMotion();
    void ExecuteUbergraph_BP_FriendlyParasite_Mechanical(int32 EntryPoint);
};

#endif
