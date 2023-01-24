#ifndef UE4SS_SDK_BP_TIpJar_Base_Blueprint_HPP
#define UE4SS_SDK_BP_TIpJar_Base_Blueprint_HPP

class ABP_TipJar_Base_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_TipJarUsable_C* BP_TipJarUsable;
    class UParticleSystemComponent* ParticleSystem;
    class UWidgetComponent* Widget;
    class UBoxComponent* Box;
    class USkeletalMeshComponent* SK_TipMachine;
    class USceneComponent* DefaultSceneRoot1;
    class ASpaceRigBar* BarReference;
    int32 TipAmount;

    void All_PlayTip(class APlayerCharacter* User, int32 AnimIndex);
    void BndEvt__BP_TipJarUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TipJar_Base_Blueprint(int32 EntryPoint);
};

#endif
