#ifndef UE4SS_SDK_PRJ_Foam_HPP
#define UE4SS_SDK_PRJ_Foam_HPP

class APRJ_Foam_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UDamageComponent* Damage;
    TSubclassOf<class AActor> puddle;
    TSubclassOf<class AActor> Puddle_WalkingPlagueheart;

    class UInfectionPointCleaningComponent* GetCleaningPoints(FVector fromLocation);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Foam(int32 EntryPoint);
};

#endif
