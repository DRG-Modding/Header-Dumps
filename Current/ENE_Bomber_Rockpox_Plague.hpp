#ifndef UE4SS_SDK_ENE_Bomber_Rockpox_Plague_HPP
#define UE4SS_SDK_ENE_Bomber_Rockpox_Plague_HPP

class AENE_Bomber_Rockpox_Plague_C : public AENE_Bomber_Child_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* InfectionPoint10;
    class UInfectionMasterComponent* InfectionMaster;
    class UStaticMeshComponent* InfectionPoint6;
    class UStaticMeshComponent* InfectionPoint9;
    class UStaticMeshComponent* InfectionPoint8;
    class UStaticMeshComponent* InfectionPoint7;
    class UStaticMeshComponent* InfectionPoint2;
    int32 InfectionPoints;
    int32 InfectionPointsDestroyed;
    TSubclassOf<class UStatusEffect> InfectionSTE;

    void BndEvt__ENE_Spider_Grunt_TentacleInfection_ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void ReceiveBeginPlay();
    void PopAllWeakPoints(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_ENE_Bomber_Rockpox_Plague(int32 EntryPoint);
};

#endif
