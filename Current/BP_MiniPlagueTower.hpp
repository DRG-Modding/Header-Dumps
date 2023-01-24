#ifndef UE4SS_SDK_BP_MiniPlagueTower_HPP
#define UE4SS_SDK_BP_MiniPlagueTower_HPP

class ABP_MiniPlagueTower_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_TMP_MiniPlagueTowerl_DeathExplosion;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* SM_Plague_Spore_Tower;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;
    class UNiagaraSystem* deathParticles;
    class USoundBase* deathSound;

    void BndEvt__BP_MiniPlagueTower_SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void MainTowerDestroyed();
    void ExecuteUbergraph_BP_MiniPlagueTower(int32 EntryPoint);
};

#endif
