#ifndef UE4SS_SDK_PRJ_GooProjectile_Fragment_GooBomoberSpecial_HPP
#define UE4SS_SDK_PRJ_GooProjectile_Fragment_GooBomoberSpecial_HPP

class APRJ_GooProjectile_Fragment_GooBomoberSpecial_C : public APRJ_GooProjectile_Fragment_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* ApplyGooTrigger;

    void OnInitialized();
    void BndEvt__ApplyGooTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_PRJ_GooProjectile_Fragment_GooBomoberSpecial(int32 EntryPoint);
};

#endif
