#ifndef UE4SS_SDK_ENE_Spider_Exploding_Rockpox_Plague_HPP
#define UE4SS_SDK_ENE_Spider_Exploding_Rockpox_Plague_HPP

class AENE_Spider_Exploding_Rockpox_Plague_C : public AENE_Spider_Exploding_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UNiagaraComponent* SporeCloud;
    class UInfectionMasterComponent* InfectionMaster;
    class UStaticMeshComponent* InfectionPoint9;
    class UStaticMeshComponent* InfectionPoint8;
    class UStaticMeshComponent* InfectionPoint7;
    class UStaticMeshComponent* InfectionPoint6;
    class UStaticMeshComponent* InfectionPoint5;
    class UStaticMeshComponent* InfectionPoint4;
    class UStaticMeshComponent* InfectionPoint3;
    class UStaticMeshComponent* InfectionPoint2;
    class UStaticMeshComponent* InfectionPoint1;
    int32 InfectionPoints;
    TSubclassOf<class UStatusEffect> InfectionSTE;
    int32 InfectionPointsDestroyed;
    TSubclassOf<class AActor> AcidCloudClass;

    void ReceiveBeginPlay();
    void PopAllWeakPoints(class UHealthComponentBase* HealthComponent);
    void BndEvt__ENE_Spider_Grunt_TentacleInfection_ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void OnExplosionFinished();
    void ExecuteUbergraph_ENE_Spider_Exploding_Rockpox_Plague(int32 EntryPoint);
};

#endif
