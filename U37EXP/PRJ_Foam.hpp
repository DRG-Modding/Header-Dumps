#ifndef UE4SS_SDK_PRJ_Foam_HPP
#define UE4SS_SDK_PRJ_Foam_HPP

class APRJ_Foam_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* StaticMesh;
    TSubclassOf<class AActor> puddle;
    bool HitPlague;

    void ReceiveBeginPlay();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Foam(int32 EntryPoint);
};

#endif
