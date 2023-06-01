#ifndef UE4SS_SDK_ESI_Bomber_Rockpox_Plague_HPP
#define UE4SS_SDK_ESI_Bomber_Rockpox_Plague_HPP

class AESI_Bomber_Rockpox_Plague_C : public AESI_Spider_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class UParticleSystemComponent* ParticleSystem1;
    class UStaticMeshComponent* InfectionPoint7;
    class UStaticMeshComponent* InfectionPoint8;
    class UStaticMeshComponent* InfectionPoint2;
    class UStaticMeshComponent* InfectionPoint10;
    class UStaticMeshComponent* InfectionPoint6;
    class UStaticMeshComponent* InfectionPoint9;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_Bomber_Rockpox_Plague(int32 EntryPoint);
};

#endif
