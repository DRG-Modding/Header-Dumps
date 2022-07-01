#ifndef UE4SS_SDK_BP_Branch_A_HPP
#define UE4SS_SDK_BP_Branch_A_HPP

class ABP_Branch_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* SM_DeadTree_Branch_A;
    class USimpleHealthComponent* SimpleHealth;
    class UStaticMeshComponent* SM_DeadTree_Twig_A;
    class UStaticMeshComponent* Twig2;
    float TwigProbability;

    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_Branch_A(int32 EntryPoint);
};

#endif
