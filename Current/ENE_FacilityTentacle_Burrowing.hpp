#ifndef UE4SS_SDK_ENE_FacilityTentacle_Burrowing_HPP
#define UE4SS_SDK_ENE_FacilityTentacle_Burrowing_HPP

class AENE_FacilityTentacle_Burrowing_C : public AENE_FacilityTentacle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    class AENE_FacilityTentacle_C* ChildTentacle;
    float BurrowDuration;
    FVector Target;
    class AActor* SpawnActor;

    void PlaceEndTentacles(FVector PlayerLocation, bool& success, class AActor*& SpawnedTentacle);
    void GetTentacle(class AENE_FacilityTentacle_C*& Tentacle);
    void FindGroundLocation(bool& success, FVector& Location);
    void BurrowingAttack(class AActor* AttackTarget, FVector BurrowLocation);
    void ChildTentacleDied(class UHealthComponentBase* HealthComponent);
    void PlayPreBurrowSound();
    void HandleDeath();
    void Recieve_OnRep_Owner();
    void ExecuteUbergraph_ENE_FacilityTentacle_Burrowing(int32 EntryPoint);
};

#endif
