#ifndef UE4SS_SDK_ENE_JellyBreeder_RockpoxPlague_HPP
#define UE4SS_SDK_ENE_JellyBreeder_RockpoxPlague_HPP

class AENE_JellyBreeder_RockpoxPlague_C : public AENE_JellyBreeder_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileThrowerAttack* ProjectileThrowerAttack;
    class UStaticMeshComponent* InfectionPoint6;
    class UStaticMeshComponent* InfectionPoint11;
    class UStaticMeshComponent* InfectionPoint10;
    class UStaticMeshComponent* InfectionPoint9;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UInfectionMasterComponent* InfectionMaster;
    class UStaticMeshComponent* InfectionPoint8;
    class UStaticMeshComponent* InfectionPoint7;
    class UStaticMeshComponent* InfectionPoint5;
    class UStaticMeshComponent* InfectionPoint4;
    class UStaticMeshComponent* InfectionPoint3;
    class UStaticMeshComponent* InfectionPoint2;
    class UStaticMeshComponent* InfectionPoint1;
    float Wobble_Intensity_760E92914F02A150ACB1698955C0C74C;
    TEnumAsByte<ETimelineDirection::Type> Wobble__Direction_760E92914F02A150ACB1698955C0C74C;
    class UTimelineComponent* Wobble;
    TSubclassOf<class UStatusEffect> InfectionSTE;
    int32 InfectionPointsDestroyed;
    int32 InfectionPoints;
    int32 LarvaSpawned;
    class UMaterialInstanceDynamic* DynamicMaterial;
    TSubclassOf<class AActor> AcidCloudClass;

    void UserConstructionScript();
    void Wobble__FinishedFunc();
    void Wobble__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__ENE_Spider_Grunt_TentacleInfection_ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void PopAllWeakPoints(class UHealthComponentBase* HealthComponent);
    void BndEvt__ENE_JellyBreeder_RockpoxPlague_HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_ENE_JellyBreeder_RockpoxPlague(int32 EntryPoint);
};

#endif
