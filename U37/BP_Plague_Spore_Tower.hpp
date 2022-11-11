#ifndef UE4SS_SDK_BP_Plague_Spore_Tower_HPP
#define UE4SS_SDK_BP_Plague_Spore_Tower_HPP

class ABP_Plague_Spore_Tower_C : public APlagueInfectionNode
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* ColliderCapsule;
    class UHealthDamageTracker* HealthDamageTracker;
    class UTerrainPlacementComponent* terrainPlacement;
    class USphereComponent* PlayerTrigger_STE;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_ScabArea3;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_ScabArea4;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_ScabArea1;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_ScabArea2;
    class USceneComponent* Carvers;
    class UNiagaraComponent* Niagara Spores;
    class UAudioComponent* Idle Sound;
    class UNiagaraComponent* Niagara_Spores;
    class UStaticMeshComponent* SporeTower_Mesh;
    class USphereComponent* Sphere;
    class USphereComponent* PlayerTrigger_DisplayBar;
    class UPointLightComponent* PointLight;
    class USceneComponent* Root;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UGemTracker* GemTracker;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    float RemoveScabs_Alpha_921F52C34A2398507EF37E968941AC3F;
    TEnumAsByte<ETimelineDirection::Type> RemoveScabs__Direction_921F52C34A2398507EF37E968941AC3F;
    class UTimelineComponent* RemoveScabs;
    TArray<class UAudioComponent*> Sounds;
    float CleanPlagueTime;
    int32 DeathParticleIdx;
    float PlagueAlpha;
    float TestCustomValue;
    FTimerHandle CheckForPlayersTimer;
    class USoundBase* RockpoxTerrainDryingUp_Cue;
    class UNiagaraSystem* deathParticles;
    class USoundBase* DeathSound_Cue;
    class UHUD_ContagionSpike_Health_C* HealthWidget;
    class UEnemyGroupDescriptor* EnemyDescriptor;

    void Set Health Bar Visible(bool InShowHealth);
    void ArePlayersInRange(float Distance, bool& InRange);
    void UserConstructionScript();
    void RemoveScabs__FinishedFunc();
    void RemoveScabs__UpdateFunc();
    void RemoveScabs__FireEffect__EventFunc();
    void ReceiveBeginPlay();
    void SetGemtrackerCustom();
    void TestDestroy();
    void Reset();
    void BndEvt__BP_Plague_Spore_Tower_PlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Plague_Spore_Tower_PlayerTrigger_DisplayBar_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_Plague_Spore_Tower_HealthDamageTracker_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void BndEvt__BP_Plague_Spore_Tower_HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReplacePlagueTerrain();
    void ExecuteUbergraph_BP_Plague_Spore_Tower(int32 EntryPoint);
};

#endif
