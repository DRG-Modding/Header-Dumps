#ifndef UE4SS_SDK_ENE_LootBug_HPP
#define UE4SS_SDK_ENE_LootBug_HPP

class AENE_LootBug_C : public ACaveWorm
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UInstantUsable* InstantUsable;
    class UStaticMeshComponent* DropShadow;
    class UAudioComponent* Lootbug_idle;
    class UEnemyComponent* enemy;
    class UOutlineComponent* outline;
    float Timeline_0_NewTrack_0_3777A85D4507AA016A87A299C2D01021;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3777A85D4507AA016A87A299C2D01021;
    class UTimelineComponent* Timeline_0;
    TArray<class UResourceData*> Loot;
    FVector2D ChunkCountRange;
    FVector2D ChunkValueRange;
    float DamageLootDropChance;
    float DamageLootDropCoolDown;
    TArray<class UResourceData*> ResourceTypes;
    float LastLootDrop;
    class UParticleSystem* DeathParticle;
    class USoundBase* deathSound;
    class USoundBase* DeathDropLoot;
    class AActor* DeathDestroyParticle;
    class UFSDAchievement* LootbugsKilledStat;
    bool HasPetDropped;
    TArray<class UResourceData*> ResourcesEaten;
    TArray<float> ValueEaten;
    float EatValueMultiplier;
    class UMaterialInterface* Decal;

    void DropEatenLott(FVector DropOffset);
    void EatChunk(class AResourceChunk* chunk);
    bool OnTriggerAI(FName TriggerName);
    void Has Loot(bool& Has Loot);
    void Drop Loot(FVector Impulse, FVector DropOffset, bool& success);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void All_Pettet(bool LootDropped);
    void OnMessageAI(FName TriggerName);
    void OnLootBugDeath();
    void ExecuteUbergraph_ENE_LootBug(int32 EntryPoint);
};

#endif
