#ifndef UE4SS_SDK_ENE_Spider_Tank_RockpoxPlague_HPP
#define UE4SS_SDK_ENE_Spider_Tank_RockpoxPlague_HPP

class AENE_Spider_Tank_RockpoxPlague_C : public AENE_Spider_Tank_Normal_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileThrowerAttack* ProjectileThrowerAttack;
    class UBillboardComponent* ProjectileOrigin;
    class UAudioComponent* PlagueInfectedGlyphidIdle_Cue;
    class UStaticMeshComponent* InfectionPoint9;
    class UStaticMeshComponent* InfectionPoint10;
    class UInfectionMasterComponent* InfectionMaster;
    class UStaticMeshComponent* InfectionPoint2;
    class UStaticMeshComponent* InfectionPoint8;
    class UStaticMeshComponent* InfectionPoint7;
    class UStaticMeshComponent* InfectionPoint6;
    class UStaticMeshComponent* InfectionPoint5;
    class UStaticMeshComponent* InfectionPoint4;
    class UStaticMeshComponent* InfectionPoint3;
    class UStaticMeshComponent* InfectionPoint1;
    TSubclassOf<class UStatusEffect> InfectionSTE;

    void ReceiveBeginPlay();
    void PopAllWeakPoints(class UHealthComponentBase* HealthComponent);
    void BndEvt__ENE_Spider_Tank_TentacleInfection_ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void ExecuteUbergraph_ENE_Spider_Tank_RockpoxPlague(int32 EntryPoint);
};

#endif
