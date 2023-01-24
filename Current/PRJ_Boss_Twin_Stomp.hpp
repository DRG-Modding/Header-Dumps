#ifndef UE4SS_SDK_PRJ_Boss_Twin_Stomp_HPP
#define UE4SS_SDK_PRJ_Boss_Twin_Stomp_HPP

class APRJ_Boss_Twin_Stomp_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Twin_B_ProjectileBarrage_Cue;
    class UNiagaraComponent* Niagara;
    class UDamageComponent* Damage;
    class UBoxComponent* Box;

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void CustomEvent_0(class AActor* DestroyedActor);
    void ExecuteUbergraph_PRJ_Boss_Twin_Stomp(int32 EntryPoint);
};

#endif
