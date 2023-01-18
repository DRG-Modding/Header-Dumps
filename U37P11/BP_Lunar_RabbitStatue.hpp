#ifndef UE4SS_SDK_BP_Lunar_RabbitStatue_HPP
#define UE4SS_SDK_BP_Lunar_RabbitStatue_HPP

class ABP_Lunar_RabbitStatue_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Collider1;
    class UNiagaraComponent* NS_Lunar_LuckyGlow_Burst;
    class UCapsuleComponent* collider;
    class UInstantUsable* InstantUsable;
    class UStaticMeshComponent* SM_Lunar_RabbitStatue;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
    void BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void All_PlayParticles();
    void ExecuteUbergraph_BP_Lunar_RabbitStatue(int32 EntryPoint);
};

#endif
