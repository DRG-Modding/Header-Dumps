#ifndef UE4SS_SDK_BP_Facility_PowerStation_ShieldGenerator_HPP
#define UE4SS_SDK_BP_Facility_PowerStation_ShieldGenerator_HPP

class ABP_Facility_PowerStation_ShieldGenerator_C : public ABP_Facility_PowerStation_GeneratorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* ActiveParticles1;
    class UPathfinderCollisionComponent* PathfinderCollision1;
    class UStaticMeshComponent* SM_Facility_Tower_Base_Dummy_01;
    class UParticleSystemComponent* P_Shield_Generator_DeathSmoke;
    class UNiagaraComponent* Shield Generator effect;
    class UBoxComponent* Box;
    class UBoxComponent* BlockPlayer;
    class UAudioComponent* FacilityPowerStationLoop;
    class UPointLightComponent* Light_Phaser01;
    class UPointLightComponent* Light_Phaser04;
    class UPointLightComponent* Light_Phaser03;
    class UPointLightComponent* Light_RightShield;

    TSubclassOf<class UBossFightWidget> GetWidgetClass();
    void GetConnectorPoint(TArray<FTransform>& OutTransform);
    void Rep_IsCharged(bool isCharged);
    void ReceiveBeginPlay();
    void LaunchPlates();
    void OnHackingComplete();
    void ExecuteUbergraph_BP_Facility_PowerStation_ShieldGenerator(int32 EntryPoint);
};

#endif
