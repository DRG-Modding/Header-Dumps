#ifndef UE4SS_SDK_ESI_Tank_RockpoxPlague_HPP
#define UE4SS_SDK_ESI_Tank_RockpoxPlague_HPP

class AESI_Tank_RockpoxPlague_C : public AESI_Spider_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* InfectionPoint8;
    class UStaticMeshComponent* InfectionPoint7;
    class UStaticMeshComponent* InfectionPoint6;
    class UStaticMeshComponent* InfectionPoint5;
    class UStaticMeshComponent* InfectionPoint4;
    class UStaticMeshComponent* InfectionPoint3;
    class UStaticMeshComponent* InfectionPoint2;
    class UStaticMeshComponent* InfectionPoint1;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_Tank_RockpoxPlague(int32 EntryPoint);
};

#endif
